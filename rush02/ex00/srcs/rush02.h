/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwisniew <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 22:46:54 by bwisniew          #+#    #+#             */
/*   Updated: 2023/07/23 23:06:09 by bwisniew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

int		get_file_size(char *file);
int		count_line(char *str);
int		ft_is_numeric(char c);
int		ft_is_space(char c);
int		verif_new_line(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_strlen(char *str);
int		ft_is_printable(char c);
int		search_in_line(char *str, char *line);
int		search_value(char *str, char **dict);
int		ft_split_num(char *nb, char **dict);
int		ft_put_zero(char c, int size, char **dict);
int		ft_put_spacer(int size, char **dict);
int		ft_put_two_digit(char a, char b, char **dict);
int		ft_put_tree_digit(char a, char b, char c, char **dict);
void	ft_reset_dict(char **dict, int i_dict);
void	ft_put_digit(char c, char **dict);
void	print_line(char *str);
void	ft_putstr(char *str);
char	*ft_verif_input(char *str);
char	*create_new_line(char *str);
char	*ft_strrev(char *str);
char	**create_dict(char *str);
char	*file_to_string(char *file);

#endif
