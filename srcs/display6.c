/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display6.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelmen <madelmen@student.42lausanne.ch   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 00:42:52 by madelmen          #+#    #+#             */
/*   Updated: 2024/10/05 00:42:52 by madelmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void	print_enter_nb_char_to_analyze(void)
{
	attron(COLOR_PAIR(2));
	printw("\n\n%-29sEnter the number of characters to analyze: \n", " ");
	attroff(COLOR_PAIR(2));
	print_arrow();
}

void	print_enter_len(void)
{
	attron(COLOR_PAIR(2));
	printw("\n\n%-45sEnter the length : \n", " ");
	attroff(COLOR_PAIR(2));
	print_arrow();
}

void	print_enter_lenght_to_zero(void)
{
	attron(COLOR_PAIR(2));
	printw("\n%-24sEnter the length to set to zero : ", " ");
	attroff(COLOR_PAIR(2));
	print_arrow();
}

void	print_Result_after_ft_bzero(void)
{
	attron(COLOR_PAIR(2));
	printw("\n%-40sRésultat après ft_bzero :\n\n", " ");
	attroff(COLOR_PAIR(2));
	print_arrow();
}
