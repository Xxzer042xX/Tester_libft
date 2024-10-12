/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   settings.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelmen <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:48:50 by madelmen          #+#    #+#             */
/*   Updated: 2024/09/28 16:48:50 by madelmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void	init_colors(void)
{
	start_color();
	init_pair(0, COLOR_WHITE, COLOR_BLACK);
	init_pair(1, COLOR_RED, COLOR_BLACK);
	init_pair(2, COLOR_GREEN, COLOR_BLACK);
	init_pair(3, COLOR_BLUE, COLOR_BLACK);
}

void	set(void)
{
	initscr();
	cbreak();
	noecho();
	keypad(stdscr, TRUE);
	curs_set(0);
	init_colors();
}

void	refget(void)
{
	refresh();
	getch();
}

/*
void	print_centered(const char *text, int width)
{
	int	len;
	int	spaces;

	len = strlen(text);
	if (len >= width)
		printw("%s", text);
	else
	{
		spaces = (width - len) / 2;
		printw("%*s%s", spaces, "", text);
	}
}
*/