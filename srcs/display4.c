/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelmen <madelmen@student.42lausanne.ch   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 03:29:48 by madelmen          #+#    #+#             */
/*   Updated: 2024/10/04 03:29:48 by madelmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void	print_fonction_name(void)
{
	attron(COLOR_PAIR(2));
	printw("\n\n\n\n%-38sEnter the name of the function :\n\n", " ");
	attroff(COLOR_PAIR(2));
}

void	print_arrow(void)
{
	attron(COLOR_PAIR(1));
	printw("\n%-30s-->\t\t", " ");
	attroff(COLOR_PAIR(1));
}

void	available_tests(void)
{
	attron(COLOR_PAIR(2));
	printw("\n%-45sAvailable tests :\n\n\n\n", " ");
	attroff(COLOR_PAIR(2));
}

void	print_first_str(void)
{
	attron(COLOR_PAIR(2));
	printw("\n%-25sEnter the first string (max 100 characters) : ", " ");
	attroff(COLOR_PAIR(2));
	print_arrow();
}

void	print_enter_char(void)
{
	attron(COLOR_PAIR(2));
	printw("\n%-45sEnter a character : \n", " ");
	attroff(COLOR_PAIR(2));
	print_arrow();
}
