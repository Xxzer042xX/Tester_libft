/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrappers4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelmen <madelmen@student.42lausanne.ch   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 23:37:48 by madelmen          #+#    #+#             */
/*   Updated: 2024/10/04 23:37:48 by madelmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

int wrapper_ft_memcpy(void)
{
    char std_dest[100] = {0};
    char dest[100] = {0};
    char src[100];
    size_t n;

    clear();
    my_name();
    print_go_back();
    echo();
    print_enter_str();
    getstr(src);
    attron(COLOR_PAIR(2));
    printw("\n%-24sEntrez la longueur à copier : ", " ");
    attroff(COLOR_PAIR(2));
    print_arrow();
    scanw("%zu", &n);
    ft_memcpy(dest, src, n);
    memcpy(std_dest, src, n);
    noecho();
    clear();
    my_name();
    print_go_back();
    if (memcmp(dest, std_dest, n) == 0)
    {
        attron(COLOR_PAIR(2));
        printw("\n\n%-40sTest réussi : ", " ");
        attroff(COLOR_PAIR(2));
        printw("%s\t\n\n", dest);
        title();
        refget();
        return (1);
    }
    else
    {
        attron(COLOR_PAIR(1));
        printw("\n\n%-32sTest échoué : \n", " ");
        attroff(COLOR_PAIR(1));
        title();
        refget();
        return (0);
    }
}

int wrapper_ft_memmove(void)
{
    char dest[100] = {0};
    char std_dest[100] = {0};
    char src[100] = {0};
    size_t len;

    clear();
    my_name();
    print_go_back();
    print_enter_str_src();
    echo();
    getstr(src);
    refresh();
    attron(COLOR_PAIR(2));
    printw("\n%-35sEntrez la longueur à déplacer : ", " ");
    attroff(COLOR_PAIR(2));
    attron(COLOR_PAIR(1));
    printw("\n\n\n%-40s-->\t", " ");
    attroff(COLOR_PAIR(1));
    scanw("%zu", &len);
    ft_memmove(dest, src, len);
    memmove(std_dest, src, len);
    clear();
    noecho();
    my_name();
    print_go_back();
    if (strcmp(dest, std_dest) == 0)
    {
        attron(COLOR_PAIR(2));
        printw("\n\n%-40sTest réussi : ", " ");
        attroff(COLOR_PAIR(2));
        printw("%s\n\n", dest);
        title();
        refget();
        return (1);
    }
    else
    {
        attron(COLOR_PAIR(1));
        printw("\n\n%-32sTest échoué : \n", " ");
        attroff(COLOR_PAIR(1));
        printw("%s\n", dest);
        printw("%s\n", std_dest);
        title();
        refget();
        return (0);
    }
}

int wrapper_ft_memchr(void)
{
    char buffer[100];
    char c;
    size_t n;
    char *std_result;
    char *ft_result;

    clear();
    my_name();
    print_go_back();
    print_enter_str();
    echo();
    getstr(buffer);
    attron(COLOR_PAIR(2));
    printw("\n%-38sEntrez le caractère à chercher : ", " ");
    attroff(COLOR_PAIR(2));
    attron(COLOR_PAIR(1));
    printw("\n\n\n%-40s-->\t", " ");
    attroff(COLOR_PAIR(1));
    scanw("%c", &c);
    attron(COLOR_PAIR(2));
    printw("\n%-35sEntrez le nombre de caractères à analyser : ", " ");
    attroff(COLOR_PAIR(2));
	attron(COLOR_PAIR(1));
    printw("\n\n\n%-40s-->\t", " ");
    attroff(COLOR_PAIR(1));
    scanw("%zu", &n);
    if (n > sizeof(buffer))
	{
        attron(COLOR_PAIR(1));
        printw("\n\n%-32sErreur : Le nombre de caractères dépasse la taille du buffer.\n", " ");
        attroff(COLOR_PAIR(1));
        return (0);
    }
    ft_result = ft_memchr(buffer, c, n);
    std_result = memchr(buffer, c, n);
    noecho();
    clear();
    my_name();
    print_go_back();
    if (ft_result == std_result)
	{
        if (ft_result)
		{
			attron(COLOR_PAIR(2));
			printw("\n\n%-40sTest réussi : ", " ");
			attroff(COLOR_PAIR(2));
			printw("%p\n\n", ft_result);
			title();
			refget();
			return (1);
        }
		else
		{
			attron(COLOR_PAIR(2));
			printw("\n\n%-40sTest réussi : ", " ");
			attroff(COLOR_PAIR(2));
			printw("NULL\n");
			title();
			refget();
			return (1);
        }
    }
	else
	{
		attron(COLOR_PAIR(1));
        printw("\n\n%-40sTest échoué\n", " ");
		attroff(COLOR_PAIR(1));
        printw("Résultat ft_memchr : %s\n", ft_result ? ft_result : "NULL");
        printw("Résultat memchr : %s\n", std_result ? std_result : "NULL");
		title();
		refget();
        return (0);
    }
}

int wrapper_ft_memcmp(void)
{
    char    s1[100];
    char    s2[100];
    size_t  n;
    int ft_result;
    int std_result;

    clear();
    my_name();
    print_go_back();
    echo();
    attron(COLOR_PAIR(2));
    printw("\n%-38sEntrez la première chaîne (max 100 caractères) : ", " ");
    attroff(COLOR_PAIR(2));
    attron(COLOR_PAIR(1));
    printw("\n\n\n%-40s-->\t", " ");
    attroff(COLOR_PAIR(1));
    getstr(s1);
    attron(COLOR_PAIR(2));
    printw("\n%-38sEntrez la deuxième chaîne (max 100 caractères) : ", " ");
    attroff(COLOR_PAIR(2));
    attron(COLOR_PAIR(1));
    printw("\n\n\n%-40s-->\t", " ");
    attroff(COLOR_PAIR(1));
    getstr(s2);
    attron(COLOR_PAIR(2));
    printw("\n%-38sEntrez le nombre de caractères à comparer : ", " ");
    attroff(COLOR_PAIR(2));
    attron(COLOR_PAIR(1));
    printw("\n\n\n%-40s-->\t", " ");
    attroff(COLOR_PAIR(1));
    scanw("%zu", &n);
    ft_result = ft_memcmp(s1, s2, n);
    std_result = memcmp(s1, s2, n);
    noecho();
    clear();
    my_name();
    print_go_back();
    if (ft_result == std_result)
    {
			attron(COLOR_PAIR(2));
			printw("\n\n%-40sTest réussi : ", " ");
			attroff(COLOR_PAIR(2));
			title();
			refget();
			return (1);
    }
    else
    {
        attron(COLOR_PAIR(1));
        printw("\n\n%-40sTest échoué\n", " ");
		attroff(COLOR_PAIR(1));
		title();
		refget();
		return (1);
    }
}

int wrapper_ft_calloc(void)
{
    size_t  count;
    size_t  size;
    void    *ft_result;
    void   *std_result;

    clear();
    my_name();
    print_go_back();
    echo();
    attron(COLOR_PAIR(2));
    printw("\n%-38sEntrez le nombre d'éléments : ", " ");
    attroff(COLOR_PAIR(2));
    attron(COLOR_PAIR(1));
    printw("\n\n\n%-40s-->\t", " ");
    attroff(COLOR_PAIR(1));
    scanw("%zu", &count);
    attron(COLOR_PAIR(2));
    printw("\n%-38sEntrez la taille de chaque élément : ", " ");
    attroff(COLOR_PAIR(2));
    attron(COLOR_PAIR(1));
    printw("\n\n\n%-40s-->\t", " ");
    attroff(COLOR_PAIR(1));
    scanw("%zu", &size);
    ft_result = ft_calloc(count, size);
    std_result = calloc(count, size);
    noecho();
    clear();
    my_name();
    print_go_back();
    if ((ft_result == NULL && std_result == NULL) || (ft_result && std_result && memcmp(ft_result, std_result, count * size) == 0))
    {
			attron(COLOR_PAIR(2));
			printw("\n\n%-40sTest réussi : mémoire allouée avec succès.\n", " ");
			attroff(COLOR_PAIR(2));
			title();
			refget();
    }
    else
    {
        attron(COLOR_PAIR(1));
        printw("\n\n%-40sTest échoué\n", " ");
		attroff(COLOR_PAIR(1));
		title();
		refget();
    }
    free(ft_result);
    free(std_result);
    return (1);
}
