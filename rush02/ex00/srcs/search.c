/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwisniew <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 19:36:23 by bwisniew          #+#    #+#             */
/*   Updated: 2023/07/23 17:49:35 by bwisniew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	print_line(char *str)
{
	int	i;

	i = 0;
	while (str[i] != ':')
		i++;
	i++;
	while (str[i] == ' ')
		i++;
	while (str[i])
	{
		while (str[i] && (ft_is_printable(str[i]) && str[i] != ' '))
		{
			write(1, &str[i], 1);
			i++;
		}
		while (str[i] && str[i] == ' ')
			i++;
		if (str[i] != '\0')
			write(1, " ", 1);
	}
}

int	search_in_line(char *str, char *line)
{
	int	str_len;

	str_len = ft_strlen(str);
	if (ft_strncmp(str, line, str_len) == 0 && !ft_is_numeric(line[str_len]))
	{
		print_line(line);
		return (1);
	}
	return (0);
}

int	search_value(char *str, char **dict)
{
	int	i;

	i = 0;
	while (dict[i] != NULL)
	{
		if (search_in_line(str, dict[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}
