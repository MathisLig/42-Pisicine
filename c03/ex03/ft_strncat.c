/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:33:25 by mligout           #+#    #+#             */
/*   Updated: 2023/07/16 16:14:07 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while ((src[b] != '\0') && (b < nb))
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	return (dest);
}
/*
   int     main(void)
   {
   char    src[20] = "ca va ?";
   char    dest[20] = "Salut, ";
   unsigned int	nb;

   nb = 2;
   ft_strncat(dest, src, nb);
   printf("%s", dest);
   return (0);
   }
   */
