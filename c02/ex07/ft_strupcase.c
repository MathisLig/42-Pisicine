/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 09:03:41 by mligout           #+#    #+#             */
/*   Updated: 2023/07/13 08:57:22 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (0);
}
*/
char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 'a') && (str[a] <= 'z'))
		{
			str[a] = str[a] - 32;
		}
		a++;
	}
	return (str);
}
/*
   int	main()
   {
   char	str[15];

   ft_strcpy(str, "abcdeABCDE-24");
   printf("%s", ft_strupcase(str));
   return (0);
   }
   */
