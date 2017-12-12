cmake_minimum_required(VERSION 3.5)

#Déclaration du projet

project(cometbuster)

#Changement du chemin de recherche des modules

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${cometbuster_SOURCE_DIR}/cmake")
message(${CMAKE_MODULE_PATH})

#Changement du chemin de sortie des executables

set(EXECUTABLE_OUTPUT_PATH ${cometbuster_SOURCE_DIR}/build/)
set(CMAKE_BINARY_DIR ${cometbuster_SOURCE_DIR}/build/)

set(RUNTIME_INSTALL ${cometbuster_SOURCE_DIR}/build/install)
set(LIBRARY_INSTALL ${cometbuster_SOURCE_DIR}/build/install/lib)

#Génération de la liste des fichiers sources

file(

        GLOB_RECURSE

        source_files

        src/*

)

#Intégrtion de la SDL

#find_package(SDL REQUIRED)
#find_package(SDL_ttf REQUIRED)

#Inclusion des entêtes


set(SDL_LIBRARIES /usr/lib/x86_64-linux-gnu/libSDL.so)
set(SDL_TTF_LIBRARIES /usr/lib/x86_64-linux-gnu/libSDL_ttf-2.0.so.0)
#set(SDL_INCLUDE_DIRS /usr/include/SDL)
#set(SDL_TTF_INCLUDE_DIR /usr/include/SDL)

#message(${SDL_LIBRARIES} NONE)
#message(${SDL_TTF_LIBRARIES} NONE)

include_directories(${cometbuster_SOURCE_DIR}/inc 
					${SDL_INCLUDE_DIRS}
					${SDL_TTF_INCLUDE_DIR})

#Déclaration de l'exécutable

add_executable(

        cometbuster_exe

        ${source_files}

)

#linkage des libs

target_link_libraries(

        cometbuster_exe

        ${SDL_LIBRARIES}
		${SDL_TTF_LIBRAIRIES}
		m   

)

install(TARGETS cometbuster_exe ${SDL_LIBRARIES} ${SDL_TTF_LIBRAIRIES}
		RUNTIME DESTINATION ${RUNTIME_INSTALL}
        LIBRARY DESTINATION ${LIBRARY_INSTALL})
        
install(FILES rsc/scores.txt DESTINATION ${RUNTIME_INSTALL})

install(DIRECTORY rsc/fonts DESTINATION ${RUNTIME_INSTALL})
install(DIRECTORY rsc/sprites DESTINATION ${RUNTIME_INSTALL})

execute_process(COMMAND make install)
