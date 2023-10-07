/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digit.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwisniew <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:05:40 by bwisniew          #+#    #+#             */
/*   Updated: 2023/07/23 21:46:24 by bwisniew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_put_zero(char c, int size, char **dict)
{
	int		i;
	char	*str;

	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (-1);
	str[0] = c;
	i = 1;
	while (i < size)
	{
		str[i] = '0';
		i++;
	}
	str[i] = '\0';
	search_value(str, dict);
	free(str);
	return (0);
}

void	ft_put_digit(char c, char **dict)
{
	char	tab[2];

	tab[0] = c;
	tab[1] = '\0';
	search_value(tab, dict);
}

int	ft_put_two_digit(char a, char b, char **dict)
{
	char	tab[3];

	tab[0] = a;
	tab[1] = b;
	tab[2] = '\0';
	if (a == '1')
		search_value(tab, dict);
	else if (a == '0' && b != '0')
		ft_put_digit(b, dict);
	else if (a != '0' && b == '0')
	{
		if (ft_put_zero(a, 2, dict) < 0)
			return (-1);
	}
	else if (a != '0' && b != '0')
	{
		if (ft_put_zero(a, 2, dict) < 0)
			return (-1);
		ft_putstr(" ");
		ft_put_digit(b, dict);
	}
	return (0);
}

int	ft_put_tree_digit(char a, char b, char c, char **dict)
{
	if (a != '0')
	{
		ft_put_digit(a, dict);
		ft_putstr(" ");
		if (ft_put_zero('1', 3, dict) < 0)
			return (-1);
		ft_putstr(" ");
	}
	if (ft_put_two_digit(b, c, dict) < 0)
		return (-1);
	return (0);
}
