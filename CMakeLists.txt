cmake_minimum_required(VERSION 3.5)

#Déclaration du projet

project(cometbuster)

#Changement du chemin de recherche des modules

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${cometbuster_SOURCE_DIR}/cmake")
message(${CMAKE_MODULE_PATH})

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
find_package(SDL2_image REQUIRED)
find_package(SDL2_ttf REQUIRED)

#Inclusion des entêtes

include_directories(/inc 
					${SDL2_INCLUDE_DIRS}
					${SDL2_IMAGE_INCLUDE_DIR}
					${SDL2_TTF_INCLUDE_DIR})

#Déclaration de l'exécutable

add_executable(

        cometbuster_exe

        ${source_files}

)

#linkage des libs

target_link_libraries(

        cometbuster_exe

        ${SDL2_LIBRARIES} 
        ${SDL2_IMAGE_INCLUDE_DIR}
		${SDL2_TTF_INCLUDE_DIR}   

)
