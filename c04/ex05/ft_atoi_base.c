/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:59:14 by mligout           #+#    #+#             */
/*   Updated: 2023/07/24 15:12:05 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

int     ft_baselen(char *base)
{
	int     i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int     ft_base_ok(char *base)
{
	int     i;
	int     j;
	int     base_len;

	base_len = ft_baselen(base);
	if (base_len < 2)
		return (-1);
	i = 0;
	while (base[i])
	{
		if ((base[i] == '+') || (base[i] == '-') || (base[i] < 33) || (base[i] == 127))
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

int    ft_atoi_base(char *str, char *base)
{
	int    sign;
	int    i;
	int    result;
	int     base_ok;
	int     base_len;

	base_len = ft_baselen(base);
	base_ok = ft_base_ok(base);
	sign = 1;
	i = 0;
	result = 0;
	if (base_ok == 1)
	{
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				sign *= -1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + str[i] - '0';
			i++;
		}
		return (result * sign);
	}
}

int    main(void)
{
	char    *str = "   e  ---+-+1234ab567";

	printf("%d", ft_atoi_base(str, "0123456789abcdef");
			return (0);
			}
			*/
