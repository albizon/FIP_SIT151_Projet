cmake_minimum_required(VERSION 3.5)

#Déclaration du projet

project(cometbuster)

#Changement du chemin de sortie des executables

set(EXECUTABLE_OUTPUT_PATH build/)

#Génération de la liste des fichiers sources

file(

        GLOB_RECURSE

        source_files

        src/*

)

#Intégrtion de la SDL

find_package(SDL2 REQUIRED)

#Inclusion des entêtes

include_directories(/inc ${SDL2_INCLUDE_DIRS})

#Déclaration de l'exécutable

add_executable(

        cometbuster_exe

        ${source_files}

)

#linkage des libs

target_link_libraries(

        cometbuster_exe

        ${SDL2_LIBRARIES}    

)
