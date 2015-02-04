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