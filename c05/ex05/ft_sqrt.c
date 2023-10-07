/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:51:37 by mligout           #+#    #+#             */
/*   Updated: 2023/07/23 09:43:00 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	y;
	int	x;

	x = nb;
	y = 2;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb == 0)
		return (0);
	if (nb > 2)
	{
		while (y * y <= x && y <= 46340)
		{
			if (y * y == x)
				return (y);
			y++;
		}
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d - %d", 2147483647, ft_sqrt(2147483647));
	return (0);
}
*/
