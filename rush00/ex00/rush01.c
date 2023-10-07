/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrio <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:04:39 by lrio              #+#    #+#             */
/*   Updated: 2023/07/09 13:16:33 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	prt_slash(int a, int i)
{
	if ((i == 0 && a == 0) || (i != 0 && a != 0))
		ft_putchar('/');
	else
		ft_putchar('\\');
}

void	prt_l(int setting, int setting2, int size)
{
	int	i;

	size--;
	i = 0;
	while (i != size + 1)
	{
		if (setting == 0)
		{
			if (i == 0 || i == size)
				prt_slash(setting2, i);
			else
				ft_putchar('*');
		}
		else
		{
			if (i == 0 || i == size)
				ft_putchar('*');
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
		prt_l(type, i, a);
		ft_putchar('\n');
		i++;
	}	
}
