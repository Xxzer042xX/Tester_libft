# Nom de l'exécutable
NAME = libf_tester

# Compilateur et options
CC = gcc
CFLAGS = -Wall -Werror -Wextra -Iinclude -I$(LIBFT_INCLUDES)

# Répertoire des fichiers sources
SRCS_DIR = srcs
# Répertoire des fichiers objets
OBJS_DIR = objs

# Liste explicite des fichiers sources
SRCS = $(SRCS_DIR)/main.c \
       $(SRCS_DIR)/menu_logic.c \
       $(SRCS_DIR)/display.c \
       $(SRCS_DIR)/display2.c \
	   $(SRCS_DIR)/display3.c \
	   $(SRCS_DIR)/display4.c \
	   $(SRCS_DIR)/display5.c \
	   $(SRCS_DIR)/display6.c \
	   $(SRCS_DIR)/display7.c \
       $(SRCS_DIR)/function_finder.c \
       $(SRCS_DIR)/init.c \
       $(SRCS_DIR)/settings.c \
       $(SRCS_DIR)/logic_sh.c \
	   $(SRCS_DIR)/wrappers.c \
	   $(SRCS_DIR)/wrappers2.c \
	   $(SRCS_DIR)/wrappers3.c \
	   $(SRCS_DIR)/wrappers4.c \
	   $(SRCS_DIR)/wrappers5.c \
	   $(SRCS_DIR)/test.c \
	   $(SRCS_DIR)/test2.c \
	   $(SRCS_DIR)/test3.c \
	   $(SRCS_DIR)/test4.c \
	   $(SRCS_DIR)/test5.c \

# Chemin vers la bibliothèque libft
LIBFT_DIR = ..
LIBFT = $(LIBFT_DIR)/libft.a

# Chemin d'inclusion pour les fichiers d'en-tête de la libft
LIBFT_INCLUDES = $(LIBFT_DIR)

# Fichiers d'en-tête
INCLUDES = include/tester.h \
            $(LIBFT_INCLUDES)/libft.h  # Inclure libft.h ici

# Fichiers objets avec le répertoire objs
OBJS = $(addprefix $(OBJS_DIR)/, $(notdir $(SRCS:.c=.o)))

# Détecter l'OS
UNAME_S := $(shell uname -s)

# Ajout des bibliothèques en fonction du système
ifeq ($(UNAME_S), Linux)
    LIBS = -lncurses -lbsd
else ifeq ($(UNAME_S), Darwin)  # macOS
    LIBS = -lncurses
else
    $(error Unsupported platform. This code is only compatible with Linux and macOS.)
endif

# Règles par défaut
all: $(OBJS_DIR) $(NAME)

# Crée le dossier pour les fichiers objets s'il n'existe pas
$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

# Construction de l'exécutable
$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -L $(LIBFT_DIR) -lft $(LIBS)

# Compilation des fichiers objets
$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoyage des fichiers objets
clean:
	rm -f $(OBJS)

# Nettoyage complet (fichiers objets + exécutable)
fclean: clean
	rm -f $(NAME)

# Récréation complète (nettoyer puis recompiler)
re: fclean all

# Pour éviter que des fichiers qui s'appellent "clean", "fclean", "all" soient interprétés comme des fichiers à compiler
.PHONY: all clean fclean re
