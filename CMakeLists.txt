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
    add_executable(outrun_online_arcade_recomp WIN32 ${OUTRUNONLINEARCADERECOMP_SOURCES})
else()
    add_executable(outrun_online_arcade_recomp ${OUTRUNONLINEARCADERECOMP_SOURCES})
endif()

rexglue_setup_target(outrun_online_arcade_recomp)
