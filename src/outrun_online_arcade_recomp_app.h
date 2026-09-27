// outrun_online_arcade_recomp - ReXGlue Recompiled Project
//
// Customize your app by overriding virtual hooks from rex::ReXApp.

#pragma once

#include <rex/rex_app.h>
#include <rex/filesystem.h>
#include <rex/cvar.h>

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
  // void OnPostInitLogging() override {}
  // void OnLoadXexImage(std::string& xex_image) override {}
  // void OnPostSetup() override {}
  // void OnCreateDialogs(rex::ui::ImGuiDrawer* drawer) override {}
  // void OnShutdown() override {}
  // void OnConfigurePaths(rex::PathConfig& paths) override {}
};
