#!/bin/bash

# Nom de la fonction à rechercher
nom_fonction=$1

# Créer le nom du fichier .c à rechercher
file_name="${nom_fonction}.c"

# Rechercher le fichier .c dans le répertoire parent
file_path="../$file_name"

# Vérifier si le fichier existe
if [ -f "$file_path" ]; then
    # Ajouter deux tabulations au début de chaque ligne et afficher le contenu
    sed 's/^/           /' "$file_path"
fi
