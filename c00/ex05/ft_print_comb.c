/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:29:11 by mligout           #+#    #+#             */
/*   Updated: 2023/07/07 07:04:22 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char x1, char x2, char x3)
{
	ft_putchar(x1 + '0');
	ft_putchar(x2 + '0');
	ft_putchar(x3 + '0');
}

void	ft_print_comb(void)
{
	int	x1;
	int	x2;
	int	x3;

	x1 = 0;
	while (x1 <= 7)
	{
		x2 = x1 + 1;
		while (x2 <= 8)
		{
			x3 = x2 + 1;
			while (x3 <= 9)
			{
				ft_print(x1, x2, x3);
				if (!(x1 == 7 && x2 == 8 && x3 == 9))
				{
					write(1, ", ", 2);
				}
				x3++;
			}
			x2++;
		}
		x1++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
