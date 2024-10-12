/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_finder.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelmen <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:49:48 by madelmen          #+#    #+#             */
/*   Updated: 2024/09/27 11:49:48 by madelmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

int	check_libft(const t_fonctionTest *fonc, char *name_fonc)
{
	int	i;

	i = 0;
	while (fonc[i].nom != NULL)
	{
		if (strcmp(fonc[i].nom, name_fonc) == 0)
		{
			fonc[i].wraper();
			return (0);
		}
		i++;
	}
	return (1);
}

void	print_is_dispo(const t_fonctionTest *fonctions)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	available_tests();
	printw("\t");
	while (fonctions[i].nom != NULL)
	{
		printw("\t%-*s", 25, fonctions[i].nom);
		count++;
		if (count % 3 == 0)
			printw("\n\t");
		i++;
	}
	if (count % 3 != 0)
		printw("\n");
}

void	print_unknow(char *nom_fonction)
{
	int	repeat;

	repeat = 3;
	clear();
	my_name();
	while (repeat--)
	{
		attron(COLOR_PAIR(1) | A_BLINK);
		mvprintw(12, 45, "Unknown function!");
		attroff(COLOR_PAIR(1) | A_BLINK);
		printw("\n\n\n\n\n%-48s%s\n\n\n\n\n\n\n", " ", nom_fonction);
		title();
		refresh();
		usleep(600000);
		mvprintw(12, 45, "                      ");
		refresh();
		usleep(600000);
	}
}
