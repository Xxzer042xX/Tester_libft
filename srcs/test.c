/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelmen <madelmen@student.42lausanne.ch   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 22:16:30 by madelmen          #+#    #+#             */
/*   Updated: 2024/10/04 22:16:30 by madelmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

int	test_strlen(size_t ft_result, size_t std_result)
{
	if (ft_result == std_result)
	{
		attron(COLOR_PAIR(2));
		printw("\n\n%-40sTest successful : %zu\n\n\n\n\n", " ", ft_result);
		attroff(COLOR_PAIR(2));
		title();
		refget();
		return (1);
	}
	else
	{
		attron(COLOR_PAIR(1));
		printw("\n\n%-40sTest failed :\n", " ");
		attroff(COLOR_PAIR(1));
		title();
		refget();
		return (0);
	}
}

int	test_strlcpy(size_t ft_result, size_t std_result)
{
	if (ft_result == std_result)
	{
		attron(COLOR_PAIR(2));
		printw("\n\n%-40sTest successful : %zu\n\n\n\n\n", " ", ft_result);
		attroff(COLOR_PAIR(2));
		title();
		refget();
		return (1);
	}
	else
	{
		attron(COLOR_PAIR(1));
		printw("\n\n%-40sTest failed :\n", " ");
		attroff(COLOR_PAIR(2));
		title();
		refget();
		return (0);
	}
}

int	test_strlcat(size_t ft_result, size_t std_result)
{
	if (ft_result == std_result)
	{
		attron(COLOR_PAIR(2));
		printw("\n\n%-40sTest successful : %zu\n\n\n\n\n", " ", ft_result);
		attroff(COLOR_PAIR(2));
		title();
		refget();
		return (1);
	}
	else
	{
		attron(COLOR_PAIR(1));
		printw("\n\n%-40sTest failed :\n", " ");
		attroff(COLOR_PAIR(1));
		printw("\n\n%-40sft_result : %zu\n", " ", ft_result);
		printw("\n\n%-40sresult : %zu\n", " ", std_result);
		title();
		refget();
		return (0);
	}
}

int	test_strncmp(int ft_result, int std_result)
{
	if (ft_result == std_result)
	{
		attron(COLOR_PAIR(2));
		printw("\n\n%-40sTest successful : %d\n\n\n\n\n", " ", ft_result);
		attroff(COLOR_PAIR(2));
		title();
		refget();
		return (1);
	}
	else
	{
		attron(COLOR_PAIR(1));
		printw("\n\n%-40sTest failed :\n", " ");
		attroff(COLOR_PAIR(1));
		printw("\n\n%-40sft_result : %d\n", " ", ft_result);
		printw("\n\n%-40sresult : %d\n", " ", std_result);
		title();
		refget();
		return (0);
	}
}

int	test_strdup(char *ft_result, char *std_result)
{
	if (strcmp(ft_result, std_result) == 0)
	{
		attron(COLOR_PAIR(2));
		printw("\n\n%-40sTest successful :", " ");
		attroff(COLOR_PAIR(2));
		printw(" %s\n\n\n\n\n", ft_result);
		title();
		refget();
		return (1);
	}
	else
	{
		attron(COLOR_PAIR(1));
		printw("\n\n%-40sTest failed :\n", " ");
		attroff(COLOR_PAIR(1));
		title();
		refget();
		return (0);
	}
}
