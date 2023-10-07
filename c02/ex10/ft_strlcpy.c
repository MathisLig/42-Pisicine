/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:07:20 by mligout           #+#    #+#             */
/*   Updated: 2023/07/13 15:37:25 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	compteur;
	int	i;

	compteur = 0;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
		compteur++;
	}
	return (compteur);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	i;

	a = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (i != size)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (a);
}
/*
int	main(void)
{
	char	src[20] = "TestTestTest";
	char	dest[50] = "iiiiiiiiiiiiiiiii";

	ft_strlcpy(dest, src, 2);
	printf("%s", dest);
	printf("\n%d", ft_strlcpy(dest, src, 2));
	return(0);
}
*/
