/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic_sh.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelmen <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 06:00:56 by madelmen          #+#    #+#             */
/*   Updated: 2024/09/29 06:00:56 by madelmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

int	list_sh(int link)
{
	FILE	*fp;

	fp = popen("./sh/list_file_c.sh", "r");
	if (!fp)
	{
		printw("Échec de l'exécution du script.\n");
		refget();
		return (1);
	}
	clear();
	my_name();
	if (link == 0)
		print_go_back();
	else
		available_tests();
	print_command_output(fp);
	pclose(fp);
	if (link == 0)
	{
		printw("\n\n\n\n\n");
		title();
		refget();
	}
	return (0);
}

FILE	*execute_cat_command(char *command)
{
	FILE	*pipe_fp;

	pipe_fp = popen(command, "r");
	if (!pipe_fp)
	{
		printw("Échec de l'exécution du script.\n");
		refresh();
		getch();
		return (NULL);
	}
	return (pipe_fp);
}

void	print_cat(char *buffer, FILE *pipe_fp, char *f_name)
{
	int	found;

	found = 0;
	while (fgets(buffer, sizeof(buffer), pipe_fp) != NULL)
	{
		if (!found)
		{
			print_go_back();
			found = 1;
		}
		attron(COLOR_PAIR(0));
		printw("%s", buffer);
		attroff(COLOR_PAIR(0));
	}
	if (!found)
		print_unknow(f_name);
	else
	{
		title();
		refget();
	}
}

int	cat_sh(char *f_name)
{
	char	sh[256];
	char	buffer[128];
	FILE	*pipe_fp;

	if (snprintf(sh, sizeof(sh), "./sh/find_cat_func.sh %s", f_name) < 0)
	{
		printw("Échec de la construction de la commande.\n");
		refresh();
		getch();
		return (1);
	}
	clear();
	my_name();
	pipe_fp = execute_cat_command(sh);
	if (!pipe_fp)
		return (1);
	print_cat(buffer, pipe_fp, f_name);
	pclose(pipe_fp);
	printw("\n\n\n\n\n\n\n\n\n");
	return (0);
}
