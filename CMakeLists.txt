# outrun_online_arcade_recomp - ReXGlue Recompiled Project
#
# SDK boilerplate lives in generated/rexglue.cmake.

cmake_minimum_required(VERSION 3.25)
project(outrun_online_arcade_recomp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(generated/rexglue.cmake)

# Sources
set(OUTRUNONLINEARCADERECOMP_SOURCES
    src/main.cpp
)

if(WIN32)
    list(APPEND OUTRUNONLINEARCADERECOMP_SOURCES src/win_compat.cpp)
endif()

if(WIN32)
    add_executable(outrun_online_arcade_recomp WIN32 ${OUTRUNONLINEARCADERECOMP_SOURCES})
    if(MINGW)
        target_link_options(outrun_online_arcade_recomp PRIVATE -municode)
    endif()
else()
    add_executable(outrun_online_arcade_recomp ${OUTRUNONLINEARCADERECOMP_SOURCES})
endif()

rexglue_setup_target(outrun_online_arcade_recomp)
set_target_properties(outrun_online_arcade_recomp PROPERTIES OUTPUT_NAME "OOA-recomp")

# rex_app.cpp includes the runtime's ImGui overlay headers when building the
# SDK from source. Keep this private SDK include available to the host target.
if(REXSDK_DIR)
    target_include_directories(outrun_online_arcade_recomp PRIVATE
        "${REXSDK_DIR}/thirdparty/imgui"
        "${CMAKE_BINARY_DIR}/rexglue-sdk/include"
    )
endif()
