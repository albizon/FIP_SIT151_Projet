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

#Inclusion des entêtes

include_directories(/inc)

#Déclaration de l'exécutable

add_executable(

        cometbuster_exe

        ${source_files}

)
