/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrappers7.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 10:01:14 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/10/12 10:01:14 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
int wrapper_ft_putnbr_fd(void)
{
    int num;
    int fd;
    int original_fd;
    char buffer[100];
    char expected_output[100];
    int output_fd;

    clear();
    my_name();
    echo();
    attron(COLOR_PAIR(2));
    printw("\n%-25sEntrez un entier : ", " ");
    attroff(COLOR_PAIR(2));
    attron(COLOR_PAIR(1));
    printw("\n\n\n%-40s-->\t", " ");
    attroff(COLOR_PAIR(1));
    scanw("%d", &num);
    attron(COLOR_PAIR(2));
    printw("\n%-25sEntrez le descripteur de fichier (1=stdout, 2=stderr) : ", " ");
    attroff(COLOR_PAIR(2));
    attron(COLOR_PAIR(1));
    printw("\n\n\n%-40s-->\t", " ");
    attroff(COLOR_PAIR(1));
    scanw("%d", &fd);

    original_fd = dup(1);
    if (original_fd == -1) {
        printw("Erreur lors de la duplication de fd.\n");
        return (0);
    }

    output_fd = open("output.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (output_fd == -1) {
        printw("Erreur lors de l'ouverture du fichier.\n");
        close(original_fd);
        return (0);
    }

    if (dup2(output_fd, fd) == -1) {
        printw("Erreur lors de la redirection de la sortie.\n");
        close(original_fd);
        close(output_fd);
        return (0);
    }
    close(output_fd);

    ft_putnbr_fd(num, fd);

    dup2(original_fd, 1);
    close(original_fd);

    output_fd = open("output.txt", O_RDONLY);
    if (output_fd == -1) {
        printw("Erreur lors de la lecture du fichier.\n");
        return (0);
    }

    memset(buffer, 0, sizeof(buffer));
    ssize_t bytes_read = read(output_fd, buffer, sizeof(buffer) - 1);
    if (bytes_read == -1) {
        printw("Erreur lors de la lecture du fichier.\n");
        close(output_fd);
        return (0);
    }
    buffer[bytes_read] = '\0'; // Assurez-vous de null-terminer la chaîne
    close(output_fd);

    snprintf(expected_output, sizeof(expected_output), "%d\n", num); // Ajoutez un retour à la ligne si nécessaire

    if (strcmp(buffer, expected_output) == 0) {
        attron(COLOR_PAIR(2));
        printw("\n\n%-45sTest réussi : la sortie est correcte.\n", " ");
        attroff(COLOR_PAIR(2));
        title();
        refget();
        remove("output.txt"); // Suppression du fichier temporaire
        return (1);
    } else {
        attron(COLOR_PAIR(1));
        printw("\n\n%-45sTest échoué : la sortie est incorrecte.\n", " ");
        attroff(COLOR_PAIR(1));
        title();
        refget();
        remove("output.txt"); // Suppression du fichier temporaire
        return (0);
    }
}
int wrapper_ft_putstr_fd(void)
{
    char str[100];
    int fd;

    printw("Entrez une chaîne à afficher (max 100 caractères) : ");
    getstr(str);
    printw("Entrez le descripteur de fichier (0=stdout, 1=stderr, 2=stdout) : ");
    scanw("%d", &fd);

    ft_putstr_fd(str, fd);
    printw("Test réussi : chaîne '%s' envoyée au fd %d.\n", str, fd);
    return (0);
}

int wrapper_ft_putchar_fd(void)
{
    char c;
    int fd;

    printw("Entrez un caractère à afficher : ");
    c = getch();
    printw("\nEntrez le descripteur de fichier (0=stdout, 1=stderr, 2=stdout) : ");
    scanw("%d", &fd);

    ft_putchar_fd(c, fd);
    printw("Test réussi : caractère '%c' envoyé au fd %d.\n", c, fd);
    return (0);
}

int wrapper_ft_putendl_fd(void)
{
    char str[100];
    int fd;

    printw("Entrez une chaîne à afficher (max 100 caractères) : ");
    getstr(str);
    printw("Entrez le descripteur de fichier (0=stdout, 1=stderr, 2=stdout) : ");
    scanw("%d", &fd);

    ft_putendl_fd(str, fd);
    printw("Test réussi : chaîne '%s' envoyée avec un saut de ligne au fd %d.\n", str, fd);
    return (0);
}
*/
