/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 09:44:31 by mligout           #+#    #+#             */
/*   Updated: 2023/07/13 08:57:51 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	return (0);
}
*/
char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 'A') && (str[a] <= 'Z'))
		{
			str[a] += 32;
		}
		a++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[15];

	ft_strcpy(str, "abcdeABCDE-24");
	printf("%s", ft_strlowcase(str));
	return (0);
}
*/
