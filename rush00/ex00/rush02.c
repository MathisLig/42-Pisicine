/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrio <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:04:39 by lrio              #+#    #+#             */
/*   Updated: 2023/07/09 17:31:52 by lrio             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	prt_l(int setting, int setting2, int size)
{
	int	i;

	i = 0;
	while (i != size + 1)
	{
		if (setting == 0)
		{
			if (i == 0 || i == size)
			{
				if (setting2 == 0)
					ft_putchar('A');
				else
					ft_putchar('C');
			}
			else
				ft_putchar('B');
		}
		else
		{
			if (i == 0 || i == size)
				ft_putchar('B');
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
		prt_l(type, i, a - 1);
		ft_putchar('\n');
		i++;
	}	
}
