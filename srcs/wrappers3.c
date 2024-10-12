/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrappers3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelmen <madelmen@student.42lausanne.ch   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 23:37:47 by madelmen          #+#    #+#             */
/*   Updated: 2024/10/04 23:37:47 by madelmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

int	wrapper_ft_isprint(void)
{
	char	c;
	int		ft_result;
	int		std_result;

	clear();
	my_name();
	print_go_back();
	echo();
	print_enter_char();
	attron(COLOR_PAIR(2));
	scanw("%c", &c);
	ft_result = ft_isprint(c);
	std_result = isprint(c);
	noecho();
	clear();
	my_name();
	print_go_back();
	return (test_isprint(ft_result, std_result));
}

int	wrapper_ft_strnstr(void)
{
	char	*std_result;
	char	*ft_result;
	char	haystack[100];
	char	needle[100];
	size_t	len;

	clear();
	my_name();
	echo();
	print_enter_search_str();
	getstr(haystack);
	print_enter_str_to_search();
	getstr(needle);
	print_enter_nb_char_to_analyze();
	scanw("%zu", &len);
	ft_result = ft_strnstr(haystack, needle, len);
	std_result = strnstr(haystack, needle, len);
	noecho();
	clear();
	my_name();
	print_go_back();
	return (test_strnstr(ft_result, std_result));
}

int	wrapper_ft_itoa(void)
{
	int		num;
	char	*ft_result;
	char	std_result[12];

	clear();
	my_name();
	print_go_back();
	echo();
	refresh();
	print_enter_int();
	scanw("%d", &num);
	ft_result = ft_itoa(num);
	sprintf(std_result, "%d", num);
	noecho();
	clear();
	my_name();
	printw("\n%d\n\n", num);
	print_go_back();
	return (test_itoa(ft_result, std_result));
}

int	wrapper_ft_memset(void)
{
	char	*std_result;
	char	*ft_result;
	char	buffer[100];
	int		c;
	size_t	len;

	len = 0;
	clear();
	my_name();
	print_go_back();
	echo();
	print_enter_str();
	getstr(buffer);
	print_enter_char();
	c = getch();
	print_enter_len();
	scanw("%zu", &len);
	ft_result = ft_memset(buffer, c, len);
	std_result = memset(buffer, c, len);
	noecho();
	clear();
	my_name();
	print_go_back();
	return (test_memset(ft_result, std_result, len, buffer));
}

int	wrapper_ft_bzero(void)
{
	char	buffer[100];
	char	*std_result;
	char	*ft_result;
	size_t		len;

	clear();
	my_name();
	print_go_back();
	echo();
	print_enter_str();
	getstr(buffer);
	print_enter_lenght_to_zero();
	scanw("%zu", &len);
	ft_result = buffer;
	std_result = buffer;
	ft_bzero(ft_result, len);
	bzero(std_result, len);
	noecho();
	clear();
	my_name();
	print_go_back();
	print_Result_after_ft_bzero();
	return (test_bzero(ft_result, std_result, ft_strlen(buffer)));
}
