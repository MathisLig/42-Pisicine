/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 19:09:10 by mligout           #+#    #+#             */
/*   Updated: 2023/07/22 10:59:53 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	fonction_ini(int x1, int x2)
{
	ft_putchar(x1 / 10 + '0');
	ft_putchar(x1 % 10 + '0');
	{
		write(1, " ", 1);
	}
	ft_putchar(x2 / 10 + '0');
	ft_putchar(x2 % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	x1;
	int	x2;

	x1 = 0;
	while (x1 <= 99)
	{
		x2 = x1 + 1;
		while (x2 <= 99)
		{
			fonction_ini(x1, x2);
			if (! (x1 == 98 && x2 == 99))
			{
				write(1, ", ", 2);
			}
			x2++;
		}
		x1++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
