/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwisniew <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 22:42:10 by bwisniew          #+#    #+#             */
/*   Updated: 2023/07/23 22:28:32 by bwisniew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	verif_new_line(char *str)
{
	int	i;
	int	num_len;
	int	str_len;

	i = 0;
	num_len = 0;
	str_len = 0;
	while (str[i++] && ft_is_numeric(str[i]))
		num_len++;
	if (num_len < 0)
		return (-1);
	while (str[i] && ft_is_space(str[i]))
		i++;
	if (str[i++] != ':')
		return (-2);
	while (str[i] && ft_is_space(str[i]))
		i++;
	while (str[i++] && ft_is_printable(str[i]))
		str_len++;
	if (str_len < 0)
		return (-3);
	if (str[i] != '\n' && str[i] != '\0')
		return (-4);
	return (i);
}

char	*create_new_line(char *str)
{
	int		i;
	char	*line;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	line = malloc(sizeof(char) * (i + 1));
	if (!line)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		line[i] = str[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

int	count_line(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == '\n')
			i++;
		if (str[i] && verif_new_line(str + i) > 0)
			count++;
		while (str[i] && str[i] != '\n')
			i++;
	}
	return (count);
}

int	create_lines(char *str, char **dict)
{
	int	i;
	int	i_dict;

	i = 0;
	i_dict = 0;
	while (str[i])
	{
		while (str[i] && str[i] == '\n')
			i++;
		if (str[i] && verif_new_line(str + i) > 0)
		{
			dict[i_dict] = create_new_line(str + i);
			if (!dict[i_dict])
			{
				ft_reset_dict(dict, i_dict);
				free(str);
				return (-1);
			}
			i_dict++;
		}
		while (str[i] && str[i] != '\n')
			i++;
	}
	dict[i_dict] = NULL;
	return (0);
}

char	**create_dict(char *str)
{
	int		i;
	int		nb_line;
	int		i_dict;
	char	**dict;

	i = 0;
	i_dict = 0;
	nb_line = count_line(str);
	if (nb_line < 1)
		return (NULL);
	dict = malloc(sizeof(char *) * (nb_line + 1));
	if (!dict)
	{
		free(str);
		return (NULL);
	}
	if (create_lines(str, dict) < 0)
		return (NULL);
	free(str);
	return (dict);
}
