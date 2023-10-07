/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrio <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:04:39 by lrio              #+#    #+#             */
/*   Updated: 2023/07/09 11:59:17 by lrio             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	prt_l(int setting, int size)
{
	int	i;

	size--;
	i = 0;
	while (i != size + 1)
	{
		if (setting == 0)
		{
			if (i == 0 || i == size)
				ft_putchar('o');
			else
				ft_putchar('-');
		}
		else
		{
			if (i == 0 || i == size)
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		i++;
	}
}

void	rush(int a, int b)
{
	int	i;
	int	type;

	type = 0;
	i = 0;
	while (i < b)
	{
		if (i == 0 || i == b - 1)
			type = 0;
		else
			type = 1;
		prt_l(type, a);
		ft_putchar('\n');
		i++;
	}	
}
