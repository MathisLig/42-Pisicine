/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:20:14 by mligout           #+#    #+#             */
/*   Updated: 2023/07/13 08:59:44 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while ((str[a] != '\0') && (b == 1))
	{
		if ((str[a] >= '0') && (str[a] <= '9'))
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

	b = ft_str_is_numeric("");
	printf("%d", b);
	return (0);
}
*/
