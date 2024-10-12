/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelmen <madelmen@student.42lausanne.ch   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 23:44:04 by madelmen          #+#    #+#             */
/*   Updated: 2024/10/04 23:44:04 by madelmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

int	test_isprint(int ft_result, int std_result)
{
	if ((ft_result != 0 && std_result != 0) || (ft_result == 0 && std_result == 0))
	{
		attron(COLOR_PAIR(2));
		printw("\n\n%-40sTest successful : ", " ");
		attroff(COLOR_PAIR(2));
		printw("%d\n%d\n", ft_result, std_result);
		title();
		refget();
		return (1);
	}
	else
	{
		attron(COLOR_PAIR(1));
		printw("\n\n%-40sTest échoué : \n", " ");
		attroff(COLOR_PAIR(1));
		title();
		refget();
		return (0);
	}
}

int	test_itoa(char *ft_result, char *std_result)
{
	if (strcmp(ft_result, std_result) == 0)
	{
		attron(COLOR_PAIR(2));
		printw("\n\n%-40sTest réussi : ", " ");
		attroff(COLOR_PAIR(2));
		printw("%s\n", ft_result);
		title();
		refget();
		free(ft_result);
		return (1);
	}
	else
	{
		attron(COLOR_PAIR(1));
		printw("\n\n%-40sTest échoué : \n", " ");
		attroff(COLOR_PAIR(1));
		printw("%s\n", ft_result);
		title();
		refget();
		free(ft_result);
		return (0);
	}
}

int	test_strnstr(char *ft_result, char *std_result)
{
	if (ft_result == std_result)
	{
		if (ft_result)
			printw("%-44sTest réussi : %s\n", " ", ft_result);
		else
			printw("%-44sTest réussi : %s\n", " ", "NULL");
		title();
		refget();
		return (1);
	}
	else
	{
		printw("Test échoué\n");
		title();
		refget();
		return (0);
	}
}

int	test_memset(char *ft_result, char *std_result, int len, char *buffer)
{
	if (memcmp(ft_result, std_result, len) == 0)
	{
		attron(COLOR_PAIR(2));
		printw("\n\n%-32sTest réussi : ", " ");
		attroff(COLOR_PAIR(2));
		printw("Les buffers sont identiques.\n\n");
		printw("%-45s", " ");
		while (isprint(*buffer))
			printw("%c", *(buffer++));
		printw("\n\n");
		title();
		refget();
		return (1);
	}
	else
	{
		attron(COLOR_PAIR(1));
		printw("\n\n%-32sTest échoué : \n", " ");
		attroff(COLOR_PAIR(1));
		title();
		refget();
		return (0);
	}
}

int	test_bzero(char *ft_result, char *std_result, size_t l_buffer)
{
	printw("%-32s", " ");
	if (!(memcmp(ft_result, std_result, l_buffer)))
	{
		attron(COLOR_PAIR(2));
		printw("\n\n%-32sTest réussi : ", " ");
		attroff(COLOR_PAIR(2));
		while (isprint(*ft_result) == 0)
		{
			printw("\\0");
			ft_result++;
		}
		while (isprint(*ft_result))
			printw("%c", *(ft_result++));
		printw("\n\n");
		title();
		refget();
		return (1);
	}
	else
	{
		attron(COLOR_PAIR(1));
		printw("\n\n%-32sTest échoué : \n", " ");
		attroff(COLOR_PAIR(1));
		title();
		refget();
		return (0);
	}
}
