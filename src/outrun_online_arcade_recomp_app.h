// outrun_online_arcade_recomp - ReXGlue Recompiled Project
//
// Customize your app by overriding virtual hooks from rex::ReXApp.

#pragma once

#include <rex/rex_app.h>
#include <rex/filesystem.h>
#include <rex/cvar.h>

#include <array>
#include <cstdint>
#include <fstream>
#include <vector>

class OutrunOnlineArcadeRecompApp : public rex::ReXApp {
 public:
  using rex::ReXApp::ReXApp;

  static std::unique_ptr<rex::ui::WindowedApp> Create(
      rex::ui::WindowedAppContext& ctx) {
    return std::unique_ptr<OutrunOnlineArcadeRecompApp>(new OutrunOnlineArcadeRecompApp(ctx, "outrun_online_arcade_recomp",
        PPCImageConfig));
  }

  // A packaged build keeps the user's legal dump beside the executable in
  // game/. Command-line or config overrides still take precedence.
  void OnConfigurePaths(rex::PathConfig& paths) override {
    if (paths.game_data_root.empty()) {
      paths.game_data_root = rex::filesystem::GetExecutableFolder() / "game";
    }
  }

  // Repair the exact legacy preparation error found in the user's early test
  // packages. Those .gpu files contain a big-endian payload-size prefix that
  // the retail decompression layer consumes, shifting every texture and model
  // descriptor by four bytes when exposed directly through the host VFS.
  void OnPostInitLogging() override {
    static constexpr std::array<const char*, 8> kProjects = {
        "NewMM.gpu",    "NewMM_EN.gpu", "NewMM_FR.gpu", "NewMM_GE.gpu",
        "NewMM_IT.gpu", "NewMM_JP.gpu", "NewMM_SP.gpu", "NewMM_US.gpu",
    };
    const auto project_root = rex::filesystem::GetExecutableFolder() / "game" /
                              "PL_XB" / "Projects" / "NewMM";
    for (const char* name : kProjects) {
      const auto path = project_root / name;
      std::ifstream input(path, std::ios::binary | std::ios::ate);
      if (!input) {
        continue;
      }
      const auto end = input.tellg();
      if (end < std::streamoff(4)) {
        continue;
      }
      const size_t file_size = static_cast<size_t>(end);
      input.seekg(0);
      std::array<uint8_t, 4> prefix{};
      input.read(reinterpret_cast<char*>(prefix.data()), prefix.size());
      const uint32_t declared_size =
          (uint32_t(prefix[0]) << 24) | (uint32_t(prefix[1]) << 16) |
          (uint32_t(prefix[2]) << 8) | uint32_t(prefix[3]);
      if (declared_size != file_size - 4) {
        REXLOG_INFO("Validated GPU project {} ({} bytes)", name, file_size);
        continue;
      }

      std::vector<char> payload(declared_size);
      input.read(payload.data(), payload.size());
      input.close();
      std::ofstream output(path, std::ios::binary | std::ios::trunc);
      if (!output) {
        REXLOG_ERROR("Unable to repair legacy prefixed GPU project {}", name);
        continue;
      }
      output.write(payload.data(), payload.size());
      output.close();
      REXLOG_WARN("Repaired legacy prefixed GPU project {} ({} bytes)", name,
                  declared_size);
    }
  }

  // Enable ReXGlue's keyboard/mouse-to-Xbox-controller bridge by default.
  // An explicit CLI/config choice still wins.
  void OnPreSetup(rex::RuntimeConfig& config) override {
    (void)config;
    if (!rex::cvar::HasNonDefaultValue("mnk_mode")) {
      rex::cvar::SetFlagByName("mnk_mode", "true");
    }
    if (!rex::cvar::HasNonDefaultValue("gpu_allow_invalid_fetch_constants")) {
      rex::cvar::SetFlagByName("gpu_allow_invalid_fetch_constants", "true");
    }
    // The legal XBLA package is the full title, but the generic runtime reports
    // an unlicensed trial by default. OutRun's trial race path is separate and
    // is known to fail during loading, so default this title to an activated
    // content license while still allowing an explicit command-line override.
    if (!rex::cvar::HasNonDefaultValue("license_mask")) {
      rex::cvar::SetFlagByName("license_mask", "1");
    }
  }

  // Override virtual hooks for customization:
  // void OnLoadXexImage(std::string& xex_image) override {}
  // void OnPostSetup() override {}
  // void OnCreateDialogs(rex::ui::ImGuiDrawer* drawer) override {}
  // void OnShutdown() override {}
  // void OnConfigurePaths(rex::PathConfig& paths) override {}
};
