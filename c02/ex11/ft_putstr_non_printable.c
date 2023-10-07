/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:35:09 by mligout           #+#    #+#             */
/*   Updated: 2023/07/13 15:41:50 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_pustr_non_printable(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = '\\';
	while (str[a] != '\0')
	{
		if ((str[a] >= ' ') && (str[a] <= '~'))
			ft_putchar(str[a]);
		else
		{
			ft_putchar(b);
			ft_putchar("0123456789ABCDEF"[str[a] / 16]);
			ft_putchar("0123456789ABCDEF"[str[a] % 16]);
		}
		a++;
	}
}
/*
int	main(void)
{
	char	str[20] = "tttttt\aee";
	ft_pustr_non_printable(str);
	return (0);
}
*/
