cmake_minimum_required(VERSION 2.6)

#Paramétrage du projet
project(Example)

set(EXECUTABLE_OUTPUT_PATH ./bin)

#Fichiers sources

file(

        GLOB_RECURSE

        source_files

        src/*

)

#Executable

add_executable(

        Example

        ${source_files}

)