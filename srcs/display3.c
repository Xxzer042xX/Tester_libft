/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelmen <madelmen@student.42lausanne.ch   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 03:27:42 by madelmen          #+#    #+#             */
/*   Updated: 2024/10/04 03:27:42 by madelmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void	print_command_output(FILE *fp)
{
	char	buffer[128];

	while (fgets(buffer, sizeof(buffer), fp) != NULL)
		printw("%s", buffer);
}

void	print_go_back(void)
{
	attron(COLOR_PAIR(2));
	printw("\n%-31sPress any key to go back to the main menu :\n\n\n\n", " ");
	attroff(COLOR_PAIR(2));
}

void	print_second_str(void)
{
	attron(COLOR_PAIR(2));
	printw("\n%-25sEnter the second string (max 100 characters) : ", " ");
	attroff(COLOR_PAIR(2));
	print_arrow();
}

void	print_number_arg(void)
{
	attron(COLOR_PAIR(2));
	printw("\n%-25sEnter the number of characters to compare : ", " ");
	attroff(COLOR_PAIR(2));
	print_arrow();
}

void	print_str_to_conve(void)
{
	attron(COLOR_PAIR(2));
	printw("\n%-25sEntrez une chaîne à convertir (max 100 caractères) : ", " ");
	attroff(COLOR_PAIR(2));
	print_arrow();
}
