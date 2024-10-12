/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 02:05:38 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/09/18 02:05:38 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

// Assigne les noms, fonctions et wrappers (si existants)
static void	init_fonction_part1(t_fonctionTest *fonctions)
{
	fonctions[0].nom = "ft_strlen";
	fonctions[0].wraper = wrapper_ft_strlen;
	fonctions[1].nom = "ft_strlcpy";
	fonctions[1].wraper = wrapper_ft_strlcpy;
	fonctions[2].nom = "ft_strlcat";
	fonctions[2].wraper = wrapper_ft_strlcat;
	fonctions[3].nom = "ft_strncmp";
	fonctions[3].wraper = wrapper_ft_strncmp;
	fonctions[4].nom = "ft_strdup";
	fonctions[4].wraper = wrapper_ft_strdup;
	fonctions[5].nom = "ft_strnstr";
	fonctions[5].wraper = wrapper_ft_strnstr;
}

static void	init_fonction_part2(t_fonctionTest *fonctions)
{
	fonctions[6].nom = "ft_atoi";
	fonctions[6].wraper = wrapper_ft_atoi;
	fonctions[7].nom = "ft_isalpha";
	fonctions[7].wraper = wrapper_ft_isalpha;
	fonctions[8].nom = "ft_isdigit";
	fonctions[8].wraper = wrapper_ft_isdigit;
	fonctions[9].nom = "ft_isalnum";
	fonctions[9].wraper = wrapper_ft_isalnum;
	fonctions[10].nom = "ft_isascii";
	fonctions[10].wraper = wrapper_ft_isascii;
	fonctions[11].nom = "ft_isprint";
	fonctions[11].wraper = wrapper_ft_isprint;
	fonctions[12].nom = "ft_memset";
	fonctions[12].wraper = wrapper_ft_memset;
}

static void	init_fonction_part3(t_fonctionTest *fonctions)
{
	fonctions[13].nom = "ft_bzero";
	fonctions[13].wraper = wrapper_ft_bzero;
	fonctions[14].nom = "ft_memcpy";
	fonctions[14].wraper = wrapper_ft_memcpy;
	fonctions[15].nom = "ft_memmove";
	fonctions[15].wraper = wrapper_ft_memmove;
	fonctions[16].nom = "ft_memchr";
	fonctions[16].wraper = wrapper_ft_memchr;
	fonctions[17].nom = "ft_itoa";
	fonctions[17].wraper = wrapper_ft_itoa;
	fonctions[18].nom = "ft_memcmp";
	fonctions[18].wraper = wrapper_ft_memcmp;
	fonctions[19].nom = "ft_calloc";
    fonctions[19].wraper = wrapper_ft_calloc;
	fonctions[20].nom = "ft_tolower";
    fonctions[20].wraper = wrapper_ft_tolower;
	fonctions[21].nom = "ft_toupper";
    fonctions[21].wraper = wrapper_ft_toupper;
	fonctions[22].nom ="ft_strchr";
	fonctions[22].wraper = wrapper_ft_strchr;
	fonctions[23].nom ="ft_strrchr";
	fonctions[23].wraper = wrapper_ft_strrchr;
	fonctions[24].nom = NULL;
	fonctions[24].wraper = NULL;
}
/*
static void init_fonction_part4(t_fonctionTest *fonctions)
{




    fonctions[18].nom = "ft_strjoin";
    fonctions[18].wraper = wrapper_ft_strjoin;
    fonctions[19].nom = "ft_strtrim";
    fonctions[19].wraper = wrapper_ft_strtrim;
    fonctions[20].nom = "ft_split";
    fonctions[20].wraper = wrapper_ft_split;
    fonctions[22].nom = "ft_strmapi";
    fonctions[22].wraper = wrapper_ft_strmapi;
    fonctions[23].nom = "ft_striteri";
    fonctions[23].wraper = wrapper_ft_striteri;
	
}
*/

const t_fonctionTest	*init_fonction(void)
{
	static t_fonctionTest	fonctions[100];

	init_fonction_part1(fonctions);
	init_fonction_part2(fonctions);
	init_fonction_part3(fonctions);
	//init_fonction_part4(fonctions);
	return (fonctions);
}
