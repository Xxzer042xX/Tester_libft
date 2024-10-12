/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrappers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 08:53:26 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/10/02 08:53:26 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

int	wrapper_ft_strlen(void)
{
	char	buffer[101];
	size_t	ft_result;
	size_t	std_result;

	clear();
	my_name();
	print_enter_str();
	echo();
	refresh();
	getstr(buffer);
	ft_result = ft_strlen(buffer);
	std_result = strlen(buffer);
	noecho();
	clear();
	my_name();
	print_go_back();
	return (test_strlen(ft_result, std_result));
}

int	wrapper_ft_strlcpy(void)
{
	char	dest[101];
	char	src[101];
	size_t	size;
	size_t	ft_result;
	size_t	std_result;

	clear();
	my_name();
	print_enter_str();
	echo();
	refresh();
	getstr(src);
	print_enter_buffer_size();
	refresh();
	scanw("%zu", &size);
	ft_result = ft_strlcpy(dest, src, size);
	std_result = strlcpy(dest, src, size);
	noecho();
	clear();
	my_name();
	print_go_back();
	return (test_strlcpy(ft_result, std_result));
}

int	wrapper_ft_strlcat(void)
{
	char	dest_backup[101];
	char	dest[101];
	char	src[101];
	size_t	size;
	size_t	ft_result;
	size_t	std_result;

	clear();
	my_name();
	print_enter_str_dest();
	echo();
	getstr(dest);
	strcpy(dest_backup, dest);
	print_enter_str_src();
	getstr(src);
	print_enter_buffer_size();
	scanw("%zu", &size);
	ft_result = ft_strlcat(dest, src, size);
	strcpy(dest, dest_backup);
	std_result = strlcat(dest, src, size);
	noecho();
	clear();
	my_name();
	print_go_back();
	return (test_strlcat(ft_result, std_result));
}

int	wrapper_ft_strncmp(void)
{
	int		std_result;
	int		ft_result;
	char	s1[101];
	char	s2[101];
	size_t	n;

	clear();
	my_name();
	echo();
	print_first_str();
	getstr(s1);
	print_second_str();
	getstr(s2);
	print_number_arg();
	scanw("%zu", &n);
	ft_result = ft_strncmp(s1, s2, n);
	std_result = strncmp(s1, s2, n);
	noecho();
	clear();
	my_name();
	print_go_back();
	return (test_strncmp(ft_result, std_result));
}

int	wrapper_ft_strdup(void)
{
	char	buffer[100];
	char	*ft_result;
	char	*std_result;

	clear();
	my_name();
	echo();
	print_enter_str();
	getstr(buffer);
	ft_result = ft_strdup(buffer);
	std_result = strdup(buffer);
	noecho();
	clear();
	my_name();
	print_go_back();
	return (test_strdup(ft_result, std_result));
}
