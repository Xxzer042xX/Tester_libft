#!/bin/sh

# Récupérer la largeur du terminal
width=$(tput cols)

# Nombre de colonnes
columns=3

# Trouver les fichiers et les stocker dans une variable
files=$(find ../ -maxdepth 1 -type f -name "*.c" | xargs -n 1 basename | sed 's/\.c$//')

# Compter le nombre de fichiers
count=$(echo "$files" | wc -l)

# Calculer le nombre de lignes nécessaires pour afficher les fichiers en 3 colonnes
rows=$(( (count + columns - 1) / columns ))

# Calculer le padding pour centrer les colonnes
padding=$(( (width - (columns * 20)) / 2 ))  # Ajustez "20" selon la largeur maximale des noms de fichiers

# Afficher les fichiers en 3 colonnes
{
  for i in $(seq 0 $((rows - 1))); do
    for j in $(seq 0 $((columns - 1))); do
      index=$((i + j * rows))
      file=$(echo "$files" | sed -n "$((index + 1))p")
      printf "%-*s" 20 "$file"  # Ajustez "20" selon la largeur maximale des noms de fichiers
    done
    echo
  done
} | sed "s/^/$(printf '%*s' "$padding" '')/"  # Ajoute le padding pour centrer
