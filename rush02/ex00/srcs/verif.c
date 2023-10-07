/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwisniew <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 23:13:19 by bwisniew          #+#    #+#             */
/*   Updated: 2023/07/22 23:14:46 by bwisniew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_is_printable(char c)
{
	if (!(c >= 32 && c <= 126))
	{
		return (0);
	}
	return (1);
}

int	ft_is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_is_numeric(char c)
{
	if (!(c >= '0' && c <= '9'))
	{
		return (0);
	}
	return (1);
}
