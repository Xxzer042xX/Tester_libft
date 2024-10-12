/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:23:01 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/09/17 17:23:01 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTER_H
# define TESTER_H

# ifdef __APPLE__
# include <string.h>
# elif __linux__
#include <bsd/string.h>
# else
#  error "Unsupported platform. This code is only for Linux and macOS."
# endif

# include <stddef.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <ncurses.h>
# include <ctype.h>
# include <fcntl.h>

# include "libft.h"

typedef struct s_fonctionTest
{
	char	*nom;
	int		(*wraper)(void);
}	t_fonctionTest;

//personnal std fonction
char	*itoa(int n);

//init.c
const	t_fonctionTest	*init_fonction(void);

//display.c
void				my_name(void);

void				title(void);
void				print_menu_option(int opt_nu, const char *txt, int sel_opt);
void				select_menu(int selected_option);
void				display_menu(int selected);

//display2.c
void				display_end(void);
void				print_enter_str_dest(void);
void				print_enter_str_src(void);
void				print_enter_buffer_size(void);
void				print_enter_str(void);

//display3.c

//void				print_centered(const char *text, int width);
void				print_command_output(FILE *fp);
void				print_go_back(void);
void				print_second_str(void);
void				print_number_arg(void);
void				print_str_to_conve(void);

//display4.c
void				print_arrow(void);
void				print_fonction_name(void);
void				available_tests(void);
void				print_first_str(void);
void				print_enter_char(void);

//display5
void				print_first_int(void);
void				print_second_int(void);
void				print_enter_int(void);
void	print_enter_str_to_search(void);
void	print_enter_search_str(void);
//display6
void	print_enter_nb_char_to_analyze(void);
void	print_enter_len(void);
void	print_enter_lenght_to_zero(void);
void	print_Result_after_ft_bzero(void);

//menu_logic.c
int					run_menu_logic(void);
int					open_sub_menu(int sel, const t_fonctionTest *fonctions);
int					handle_input(int *selected_option);
int					sub_m2(char *name_f, const t_fonctionTest *fonc, int size);
int					sub_menu_3(char *nom_fonction, int size);

//settings.c
void				set(void);
void				refget(void);
void				print_no_file_message(char *function_name);

//function_finder.c
int					check_libft(const t_fonctionTest *fonc, char *name_fonc);
void				print_unknow(char *nom_fonction);
void				print_is_dispo(const t_fonctionTest *fonctions);

//logic_sh.c
int					list_sh(int link);
FILE				*execute_cat_command(char *command);
int					cat_sh(char *f_name);

// Prototypes des wrappers pour chaque fonction de libft obligatoire
int					wrapper_ft_atoi(void);
int					wrapper_ft_bzero(void);
int 				wrapper_ft_calloc(void);
int					wrapper_ft_isalnum(void);
int					wrapper_ft_isalpha(void);
int					wrapper_ft_isascii(void);
int					wrapper_ft_isdigit(void);
int					wrapper_ft_isprint(void);
int					wrapper_ft_itoa(void);
int					wrapper_ft_memchr(void);
int 				wrapper_ft_memcmp(void);
int					wrapper_ft_memcpy(void);
int					wrapper_ft_memmove(void);
int					wrapper_ft_memset(void);
//int 				wrapper_ft_putchar_fd(void);
//int 				wrapper_ft_putendl_fd(void);
//int 				wrapper_ft_putnbr_fd(void);
//int 				wrapper_ft_putstr_fd(void);
//int 				wrapper_ft_split(void);
int 				wrapper_ft_strchr(void);
int					wrapper_ft_strncmp(void);
int					wrapper_ft_strdup(void);
//int				wrapper_ft_striteri(void);
//int 				wrapper_ft_strjoin(void);
int					wrapper_ft_strlcat(void);
int					wrapper_ft_strlcpy(void);
int					wrapper_ft_strlen(void);
//int				wrapper_ft_strmapi(void)
int 				wrapper_ft_strnstr(void);
int 				wrapper_ft_strrchr(void);
//int				wrapper_ft_strtrim(void);
//int				wrapper_ft_substr(void);
int 				wrapper_ft_tolower(void);
int 				wrapper_ft_toupper(void);

// Prototypes des wrappers pour chaque fonction de libft bonus
//int				wrappers_ft_lstnew(void);
//int				wrappers_ft_lsadd_front(void);
//int				wrappers_ft_lstsize(void);
//int				wrappers_ft_lstlast(void);
//int				wrappers_ft_lstadd_back(void);
//int				wrappers_ft_lstdelone(void);
//int				wrappers_ft_lstclear(void);
//int				wrappers_ft_lstiter(void);
//int				wrappers_ft_lstmap(void);


//tesc.c
int					test_strlen(size_t ft_result, size_t std_result);
int					test_strlcpy(size_t ft_result, size_t std_result);
int					test_strlcat(size_t ft_result, size_t std_result);
int					test_strncmp(int ft_result, int std_result);
int					test_strdup(char *ft_result, char *std_result);

//test2.c
int					test_atoi(int ft_result, int std_result);
int					test_isalpha(int ft_result, int std_result);
int					test_isdigit(int ft_result, int std_result);
int					test_isalnum(int ft_result, int std_result);
int					test_isascii(int ft_result, int std_result);
int					test_strnstr(char *ft_result, char *std_result);
//test3.c
int					test_isprint(int ft_result, int std_result);
int					test_itoa(char *ft_result, char *std_result);
int					test_memset(char *ft_result, char *std_result, int len, char *buffer);
int					test_bzero(char *ft_result, char *std_result, size_t l_buffer);
//?

#endif