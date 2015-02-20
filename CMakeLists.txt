cmake_minimum_required(VERSION 2.6)

project(SDL-PE2D)

set(LIBRARY_OUTPUT_PATH lib/${CMAKE_BUILD_TYPE})

include_directories(include)

file(

        GLOB_RECURSE

        source_files

        src/*

        include/*

)
add_library(

        SDL-PE2D

        SHARED

        ${source_files}

)

INCLUDE(FindPkgConfig)
PKG_SEARCH_MODULE(SDL2 REQUIRED sdl2)
INCLUDE_DIRECTORIES(${SDL2_INCLUDE_DIRS})
TARGET_LINK_LIBRARIES(SDL-PE2D ${SDL2_LIBRARIES})