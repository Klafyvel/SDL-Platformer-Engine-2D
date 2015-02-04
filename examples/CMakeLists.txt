cmake_minimum_required(VERSION 2.6)

#Configuration du projet
project(Example)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BUILD_TYPE})

include_directories(../include)

link_directories(../lib/${CMAKE_BUILD_TYPE})

#Configuration de l'exécutable

file(

        GLOB_RECURSE

        source_files

        src/*

)

add_executable(

        example

        ${source_files}

)



#Configuration de l'édition de liens

target_link_libraries(

        example

        SDL-PE2D

)
