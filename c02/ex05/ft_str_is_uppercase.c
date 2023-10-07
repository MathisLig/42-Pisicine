/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:56:10 by mligout           #+#    #+#             */
/*   Updated: 2023/07/13 09:00:14 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while ((str[a] != '\0') && (b == 1))
	{
		if ((str[a] >= 'A') && (str[a] <= 'Z'))
			b = 1;
		else
			b = 0;
		a++;
	}
	return (b);
}
/*
   int     main(void)
   {
   int     b;

   b = ft_str_is_uppercase("");
   printf("%d", b);
   return (0);
   }
   */
