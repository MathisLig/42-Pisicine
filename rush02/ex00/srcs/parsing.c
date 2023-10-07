/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwisniew <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:08:54 by bwisniew          #+#    #+#             */
/*   Updated: 2023/07/23 23:10:10 by bwisniew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_verif_input(char *str)
{
	int	i;

	i = 0;
	while (str[i] && ft_is_space(str[i]))
		i++;
	if (str[i] == '+')
		i++;
	if (str[i] == '-')
		return (NULL);
	str = str + i;
	i = 0;
	while (str[i] && ft_is_numeric(str[i]))
		i++;
	if (str[i] != '\0')
		return (NULL);
	return (str);
}

int	ft_put_spacer(int size, char **dict)
{
	if (size > 3)
	{
		if (size % 3 == 0)
			size -= 2;
		if (size % 3 == 2)
			size -= 1;
		ft_putstr(" ");
		if (ft_put_zero('1', size, dict) < 0)
			return (-1);
		ft_putstr(" ");
	}
	return (0);
}

int	ft_split_num(char *nb, char **dict)
{
	int	size;

	size = ft_strlen(nb);
	while (size > 0)
	{
		size = ft_strlen(nb);
		if (size % 3 == 0 && size != 0)
		{
			if (ft_put_tree_digit(nb[0], nb[1], nb[2], dict) < 0)
				return (-1);
			nb = nb + 3;
		}
		if (size % 3 == 2)
		{
			if (ft_put_two_digit(nb[0], nb[1], dict) < 0)
				return (-1);
		}
		if (size % 3 == 1)
			ft_put_digit(nb[0], dict);
		if (size % 3 == 1 || size % 3 == 2)
			nb = nb + (size % 3);
		if (ft_put_spacer(size, dict) < 0)
			return (-1);
	}
	return (0);
}
