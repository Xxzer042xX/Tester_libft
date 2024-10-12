/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrappers5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelmen <madelmen@student.42lausanne.ch   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 23:41:52 by madelmen          #+#    #+#             */
/*   Updated: 2024/10/04 23:41:52 by madelmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

int wrapper_ft_tolower(void)
{
    char c;
    int ft_result;
    int std_result;

    clear();
    my_name();
    print_go_back();
    echo();
    print_enter_char();
    scanw("%c", &c);
    ft_result = ft_tolower(c);
    std_result = tolower(c);
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


int wrapper_ft_toupper(void)
{
    char c;
    int ft_result;
    int std_result;

    clear();
    my_name();
    print_go_back();
    echo();
    print_enter_char();
    scanw("%c", &c);
    ft_result = ft_toupper(c);
    std_result = toupper(c);
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

int wrapper_ft_strchr(void)
{
    char buffer[100];
    char c;
    char* ft_result;
    char* std_result;

    clear();
    my_name();
    print_go_back();
    echo();
    print_enter_str();
    getstr(buffer);
    print_enter_char();
    scanw("%c", &c);
    ft_result = ft_strchr(buffer, c);
    std_result = strchr(buffer, c);
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

int wrapper_ft_strrchr(void)
{
    char buffer[100];
    char c;
    char* ft_result;
    char* std_result;

    clear();
    my_name();
    print_go_back();
    echo();
    print_enter_str();
    getstr(buffer);
    print_enter_char();
    scanw("%c", &c);
    ft_result = ft_strrchr(buffer, c);
    std_result = strrchr(buffer, c);
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
