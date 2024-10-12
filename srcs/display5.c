/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelmen <madelmen@student.42lausanne.ch   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 00:43:10 by madelmen          #+#    #+#             */
/*   Updated: 2024/10/05 00:43:10 by madelmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void	print_first_int(void)
{
	attron(COLOR_PAIR(2));
	printw("\n%-25sEnter the first integer (a) : ", " ");
	attroff(COLOR_PAIR(2));
	print_arrow();
}

void	print_second_int(void)
{
	attron(COLOR_PAIR(2));
	printw("\n%-25sEnter the second integer (b) : ", " ");
	attroff(COLOR_PAIR(2));
	print_arrow();
}

void	print_enter_int(void)
{
	attron(COLOR_PAIR(2));
	printw("\n%-45sEnter a integer : \n", " ");
	attroff(COLOR_PAIR(2));
	print_arrow();
}

void	print_enter_str_to_search(void)
{
	attron(COLOR_PAIR(2));
	printw("\n\n");
	printw("%-28sEnter the string to search (max 100 characters) : \n", " ");
	attroff(COLOR_PAIR(2));
	print_arrow();
}

void	print_enter_search_str(void)
{
	attron(COLOR_PAIR(2));
	printw("\n\n%-29sEnter the search string (max 100 characters) : \n", " ");
	attroff(COLOR_PAIR(2));
	print_arrow();
}
