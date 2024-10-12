/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu_logic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelmen <madelmen@student.42lausanne.ch   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 02:56:49 by madelmen          #+#    #+#             */
/*   Updated: 2024/10/04 02:56:49 by madelmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

int	handle_input(int *selected_option)
{
	int	input;

	input = getch();
	if (input == KEY_UP && *selected_option > 1)
		(*selected_option)--;
	else if (input == KEY_DOWN && *selected_option < 4)
		(*selected_option)++;
	return (input);
}

int	run_menu_logic(void)
{
	int	selected;
	int	input;

	selected = 1;
	while (1)
	{
		display_menu(selected);
		input = handle_input(&selected);
		if (input == '\n')
			return (selected);
		refresh();
	}
}

int	sub_m2(char *name_f, const t_fonctionTest *fonc, int size)
{
	clear();
	my_name();
	print_is_dispo(fonc);
	print_fonction_name();
	print_arrow();
	echo();
	refresh();
	wgetnstr(stdscr, name_f, size - 1);
	name_f[strcspn(name_f, "\n")] = '\0';
	noecho();
	if (check_libft(fonc, name_f) != 0)
		print_unknow(name_f);
	return (0);
}

int	sub_menu_3(char *nom_fonction, int size)
{
	list_sh(1);
	print_fonction_name();
	print_arrow();
	echo();
	wgetnstr(stdscr, nom_fonction, size - 1);
	nom_fonction[strcspn(nom_fonction, "\n")] = '\0';
	noecho();
	return (cat_sh(nom_fonction));
}

int	open_sub_menu(int sel, const t_fonctionTest *fonctions)
{
	char	nom_fonction[101];

	if (sel == 1)
		return (list_sh(0));
	else if (sel == 2)
		return (sub_m2(nom_fonction, fonctions, 101));
	else if (sel == 3)
		return (sub_menu_3(nom_fonction, 101));
	return (0);
}
