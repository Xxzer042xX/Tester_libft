/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrappers6.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 09:58:37 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/10/12 09:58:37 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
int wrapper_ft_split(void)
{
    char str[100];
    char delimiter;
    char **ft_result;
    
    clear();
    my_name();
    print_go_back();
    echo();
    print_enter_str();
    getstr(str);
    attron(COLOR_PAIR(2));
    printw("\n%-38sEntrez le délimiteur : ", " ");
    attroff(COLOR_PAIR(2));
    print_arrow();
    scanw("%c", &delimiter);
    ft_result = ft_split(str, delimiter);

}

int wrapper_ft_substr(void)
{
    char str[100], substr[100];
    unsigned int start;
    size_t len;

    printw("Entrez une chaîne de caractères (max 100 caractères) : ");
    getstr(str);
    printw("Entrez le point de départ : ");
    scanw("%u", &start);
    printw("Entrez la longueur du sous-texte : ");
    scanw("%zu", &len);

    char *ft_result = ft_substr(str, start, len);
    char *std_result = (start < strlen(str)) ? strndup(str + start, len) : NULL;

    if ((ft_result == NULL && std_result == NULL) || (ft_result && std_result && strcmp(ft_result, std_result) == 0)) {
        printw("Test réussi : %s\n", ft_result);
    } else {
        printw("Test échoué\n");
    }
    free(ft_result);
    free(std_result);
    return (0);
}

int wrapper_ft_strjoin(void)
{
    char str1[50], str2[50];

    printw("Entrez la première chaîne (max 50 caractères) : ");
    getstr(str1);
    printw("Entrez la deuxième chaîne (max 50 caractères) : ");
    getstr(str2);

    char *ft_result = ft_strjoin(str1, str2);
    char *std_result = malloc(strlen(str1) + strlen(str2) + 1);
    if (std_result)
        strcpy(std_result, str1), strcat(std_result, str2);

    if (strcmp(ft_result, std_result) == 0) {
        printw("Test réussi : %s\n", ft_result);
    } else {
        printw("Test échoué\n");
    }
    free(ft_result);
    free(std_result);
    return (0);
}

int wrapper_ft_strtrim(void)
{
    char str[100], set[50];

    printw("Entrez une chaîne de caractères (max 100 caractères) : ");
    getstr(str);
    printw("Entrez les caractères à couper (max 50 caractères) : ");
    getstr(set);

    char *ft_result = ft_strtrim(str, set);
    char *std_result = strpbrk(str, set) ? ft_strdup(str + strspn(str, set)) : ft_strdup(str);

    if (strcmp(ft_result, std_result) == 0) {
        printw("Test réussi : %s\n", ft_result);
    } else {
        printw("Test échoué\n");
    }
    free(ft_result);
    free(std_result);
    return (0);
}
*/