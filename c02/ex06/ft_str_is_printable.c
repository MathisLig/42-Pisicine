/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:01:51 by mligout           #+#    #+#             */
/*   Updated: 2023/07/13 15:26:54 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while ((str[a] != '\0') && (b == 1))
	{
		if ((str[a] >= ' ') && (str[a] <= '~'))
			b = 1;
		else
			b = 0;
		a++;
	}
	return (b);
}
/*
int	main(void)
{
	int	b;

	b = ft_str_is_printable("faffurwfgƒƒ_,");
	printf ("%d", b);
	return (0);
}
*/
