/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:10:23 by mligout           #+#    #+#             */
/*   Updated: 2023/07/13 10:02:27 by mligout          ###   ########.fr       */
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

char	*ft_strupcase(char *str)
{
	int	a;
	int	b;

	a = 1;
	b = 0;
	if ((str[0] >= 'a') && (str[0] <= 'z'))
		str[0] = str[0] - 32;
	while (str[b] != '\0')
	{
		if ((str[a] >= 'a') && (str[a] <= 'z'))
		{
			if ((str[a - 1] >= 'A') && (str[a - 1] <= 'Z'))
				str[a] = str[a];
			else if ((str[a - 1] >= '0') && (str[a - 1] <= '9'))
				str[a] = str[a];
			else if ((str[a - 1] >= 'a') && (str[a - 1] <= 'z'))
				str[a] = str[a];
			else
				str[a] = str[a] - 32;
		}
		a++;
		b++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (str[a] != '\0')
	{
		ft_strlowcase(str);
		a++;
	}
	while (str[b] != '\0')
	{
		ft_strupcase(str);
		b++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[100];

	ft_strcpy(str, "salut, com);
	printf("%s", ft_strcapitalize(str));
	return (0);
}
*/
