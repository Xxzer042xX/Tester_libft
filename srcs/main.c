/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:32:36 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/09/17 20:32:36 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"
#include "libft.h"

int	main(void)
{
	int						selected;
	const t_fonctionTest	*fonctions;

	set();
	fonctions = init_fonction();
	while (1)
	{
		selected = run_menu_logic();
		if (selected != 4)
		{
			if (open_sub_menu(selected, fonctions) == 1)
			{
				endwin();
				return (1);
			}
		}
		else
		{
			display_end();
			endwin();
			return (0);
		}
	}
}
