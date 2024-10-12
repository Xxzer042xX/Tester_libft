/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelmen <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 05:53:23 by madelmen          #+#    #+#             */
/*   Updated: 2024/09/29 05:53:23 by madelmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void	display_end(void)
{
	int	repeat;

	repeat = 3;
	clear();
	my_name();
	printw("\n\n\n\n\n%-40shttps://github.com/Xxzer042xX\n\n\n\n\n\n\n", " ");
	title();
	refresh();
	while (repeat--)
	{
		attron(COLOR_PAIR(2) | A_BLINK);
		mvprintw(10, 45, "Follow me on GitHub !");
		attroff(COLOR_PAIR(2) | A_BLINK);
		refresh();
		usleep(500000);
		mvprintw(10, 45, "                      ");
		refresh();
		usleep(500000);
	}
}

void	print_enter_str_dest(void)
{
	attron(COLOR_PAIR(2));
	printw("\n%-26sEnter the destination string (max 100 characters) : ", " ");
	attroff(COLOR_PAIR(2));
	print_arrow();
}

void	print_enter_str_src(void)
{
	attron(COLOR_PAIR(2));
	printw("\n%-29sEnter the source string (max 100 characters) : \n", " ");
	attroff(COLOR_PAIR(2));
	print_arrow();
}

void	print_enter_buffer_size(void)
{
	attron(COLOR_PAIR(2));
	printw("\n%-28sEnter the size of the destination buffer : \n\n", " ");
	attroff(COLOR_PAIR(2));
	print_arrow();
}

void	print_enter_str(void)
{
	attron(COLOR_PAIR(2));
	printw("\n%-26sEnter a string of characters (max 100 characters) :", " ");
	printw("\n\n");
	attroff(COLOR_PAIR(2));
	print_arrow();
}
