/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelmen <madelmen@student.42lausanne.ch   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 23:44:01 by madelmen          #+#    #+#             */
/*   Updated: 2024/10/04 23:44:01 by madelmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

int	test_atoi(int ft_result, int std_result)
{
	if (ft_result == std_result)
	{
		attron(COLOR_PAIR(2));
		printw("\n\n%-40sTest successful :", " ");
		attroff(COLOR_PAIR(2));
		printw("%d\n\n\n\n\n", ft_result);
		title();
		refget();
		return (1);
	}
	else
	{
		attron(COLOR_PAIR(1));
		printw("\n\n%-45sTest failed :\n", " ");
		attroff(COLOR_PAIR(1));
		title();
		refget();
		return (0);
	}
}

int	test_isalpha(int ft_result, int std_result)
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
		printw("\n\n%-40sTest failed :\n", " ");
		attroff(COLOR_PAIR(1));
		printw("%d\n%d\n", ft_result, std_result);
		title();
		refget();
		return (0);
	}
}

int	test_isdigit(int ft_result, int std_result)
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
		printw("\n\n%-40sTest failed :\n", " ");
		printw("%d\n%d\n", ft_result, std_result);
		attroff(COLOR_PAIR(1));
		title();
		refget();
		return (0);
	}
}

int	test_isalnum(int ft_result, int std_result)
{
	if ((ft_result != 0 && std_result != 0) || (ft_result == 0 && std_result == 0))
	{
		attron(COLOR_PAIR(2));
		printw("\n\n%-40sTest réussi : ", " ");
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
		printw("%d\n%d\n", ft_result, std_result);
		title();
		refget();
		return (0);
	}
}

int	test_isascii(int ft_result, int std_result)
{
	if (ft_result == std_result)
	{
		attron(COLOR_PAIR(2));
		printw("\n\n%-40sTest réussi : ", " ");
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
		printw("%d\n%d\n", ft_result, std_result);
		title();
		refget();
		return (0);
	}
}
