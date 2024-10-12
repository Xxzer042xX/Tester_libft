/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelmen <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 01:24:43 by madelmen          #+#    #+#             */
/*   Updated: 2024/09/26 01:24:43 by madelmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void	my_name(void)
{
	attron(COLOR_PAIR(2));
    printw("	 ___    ___ ___    ___ ________  _______   ________  ________     ___    ___ ___    ___ \n");
    printw("	|\\  \\  /  /|\\  \\  /  /|\\_____  \\|\\  ___ \\ |\\   __  \\|\\   __  \\   |\\  \\  /  /|\\  \\  /  /|\n");
    printw("	\\ \\  \\/  / | \\  \\/  / /\\|___/  /\\ \\   __/|\\ \\  \\|\\  \\ \\  \\|\\  \\  \\ \\  \\/  / | \\  \\/  / /\n");
    printw("	 \\ \\    / / \\ \\    / /     /  / /\\ \\  \\_|/_\\ \\   _  _\\ \\  \\\\\\  \\  \\ \\    / / \\ \\    / / \n");
    printw("	  /     \\/   /     \\/     /  /_/__\\ \\  \\_|\\ \\ \\  \\\\  \\\\ \\  \\\\\\  \\  /     \\/   /     \\/  \n");
    printw("	 /  /\\   \\  /  /\\   \\    |\\________\\ \\_______\\ \\__\\\\ _\\\\ \\_______\\/  /\\   \\  /  /\\   \\  \n");
    printw("	/__/ /\\ __\\/__/ /\\ __\\    \\|_______|\\|_______|\\|__|\\|__|\\|_______/__/ /\\ __\\/__/ /\\ __\\ \n");
    printw("	|__|/ \\|__||__|/ \\|__|                                           |__|/ \\|__||__|/ \\|__|  \n\n");
	attroff(COLOR_PAIR(2));
}

void	title(void)
{
	printw("\n\n\n");
	attron(COLOR_PAIR(1));
    printw("%-5s _     _ _      __ _   %-50s _     _ _      __ _   \n", " ", " ");
    printw("%-5s| |   (_) |__  / _| |_ %-50s| |   (_) |__  / _| |_ \n", " ", " ");
    printw("%-5s| |   | | '_ \\| |_| __|%-50s| |   | | '_ \\| |_| __|\n", " ", " ");
    printw("%-5s| |___| | |_) |  _| |_ %-50s| |___| | |_) |  _| |_ \n", " ", " ");
    printw("%-5s|_____|_|_.__/|_|  \\__|%-50s|_____|_|_.__/|_|  \\__|\n", " ", " ");
	attroff(COLOR_PAIR(1)); // Retirer l'attribut de couleur
}

void	print_menu_option(int opt_nu, const char *txt, int sel_opt)
{
	printw("%-40s%d : %s", " ", opt_nu, txt);
	if (sel_opt == opt_nu)
	{
		attron(COLOR_PAIR(1));
		printw(" <--");
		attroff(COLOR_PAIR(1));
	}
	printw("\n\n");
}

void	select_menu(int selected_option)
{
	attron(COLOR_PAIR(2));
	printw("\n%-41sWelcome to my libf_tester !\n\n\n", " ");
	attroff(COLOR_PAIR(2));
	print_menu_option(1, "List functions of Libft.", selected_option);
	print_menu_option(2, "Test Libft function.", selected_option);
	print_menu_option(3, "See functions of Libft.", selected_option);
	print_menu_option(4, "Exit.", selected_option);
	attron(COLOR_PAIR(2));
	printw("\n\n\n");
	printw("%-28sMake your selection with ^ or v  and press enter :\n\n", " ");
	attroff(COLOR_PAIR(2));
}

void	display_menu(int selected)
{
	clear();
	my_name();
	select_menu(selected);
	title();
}
