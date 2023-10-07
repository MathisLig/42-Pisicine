/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:34:02 by mligout           #+#    #+#             */
/*   Updated: 2023/07/24 15:14:33 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_baselen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_base_ok(char *base)
{
	int	i;
	int	j;
	int	base_len;

	base_len = ft_baselen(base);
	if (base_len < 2)
		return (-1);
	i = 0;
	while (base[i])
	{
		if ((base[i] == '+') || (base[i] == '-') || \
				(base[i] < 33) || (base[i] == 127))
			return (-1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (-1);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_ok;
	int	base_len;

	base_len = ft_baselen(base);
	base_ok = ft_base_ok(base);
	if (base_ok == 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr *= -1;
		}
		if (nbr < base_len)
			ft_putchar(base[nbr]);
		if (nbr >= base_len)
		{
			ft_putnbr_base((nbr / base_len), base);
			ft_putnbr_base((nbr % base_len), base);
		}
	}
}
/*
   int	main(void)
   {
   ft_putnbr_base(100, "0123456789+abcd");
   return (0);
   }
   */
