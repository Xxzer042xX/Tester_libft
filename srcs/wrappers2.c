/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrappers2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelmen <madelmen@student.42lausanne.ch   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 23:37:43 by madelmen          #+#    #+#             */
/*   Updated: 2024/10/04 23:37:43 by madelmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

int	wrapper_ft_atoi(void)
{
	char	str[100];
	int		std_result;
	int		ft_result;

	clear();
	my_name();
	echo();
	print_str_to_conve();
	getstr(str);
	ft_result = ft_atoi(str);
	std_result = atoi(str);
	noecho();
	clear();
	my_name();
	print_go_back();
	return (test_atoi(ft_result, std_result));
}

int	wrapper_ft_isalpha(void)
{
char	c;
int		std_result;
int		ft_result;

clear();
my_name();
print_go_back();
echo();
print_enter_char();
scanw("%c", &c);
ft_result = ft_isalpha((int)c);
std_result = isalpha((unsigned char)c);
noecho();
clear();
my_name();
print_go_back();
return (test_isalpha(ft_result, std_result));
}

int	wrapper_ft_isdigit(void)
{
	char	c;
	int		ft_result;
	int		std_result;

	clear();
	my_name();
	print_go_back();
	echo();
	print_enter_int();
	scanw("%c", &c);
	ft_result = ft_isdigit((int)c);
	std_result = isdigit((int)c);
	noecho();
	clear();
	my_name();
	print_go_back();
	return (test_isdigit(ft_result, std_result));
}

int	wrapper_ft_isalnum(void)
{
	char	c;
	int		ft_result;
	int		std_result;

	clear();
	my_name();
	print_go_back();
	echo();
	print_enter_char();
	scanw("%c", &c);
	ft_result = ft_isalnum(c);
	std_result = isalnum(c);
	noecho();
	clear();
	my_name();
	print_go_back();
	return (test_isalnum(ft_result, std_result));

}

int	wrapper_ft_isascii(void)
{
	char	c;
	int		ft_result;
	int		std_result;

	clear();
	my_name();
	print_go_back();
	echo();
	print_enter_char();
	scanw("%c", &c);
	ft_result = ft_isascii(c);
	std_result = isascii(c);
	noecho();
	clear();
	my_name();
	print_go_back();
	return (test_isascii(ft_result, std_result));
}
