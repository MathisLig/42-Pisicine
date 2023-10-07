/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:23:27 by mligout           #+#    #+#             */
/*   Updated: 2023/07/25 19:57:36 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	compteur(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

int	compteur_line(char **strs)
{
	int	i;

	i = 0;
	while (strs[i] != NULL)
		i++;
	i--;
	return (i);
}

char	*ft_sep(char *dest, char *sep, int c)
{
	int	b;

	b = 0;
	while (sep[b] != '\0')
	{
		dest[c] = sep[b];
		c++;
		b++;
	}
	return (dest);
}

char	*ft_cat(char **strs, char *dest, char *sep)
{
	int	a;
	int	i;
	int	c;

	a = 0;
	c = 0;
	while (strs[a] != NULL)
	{
		i = 0;
		while (strs[a][i] != '\0')
		{
			dest[c] = strs[a][i];
			i++;
			c++;
		}
		a++;
		if (strs[a] != NULL)
		{
			ft_sep(dest, sep, c);
			c = c + compteur(sep);
		}
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		compteur_act;

	i = 0;
	compteur_act = 0;
	if (size == 0)
		return (malloc(sizeof(char)));
	while (strs[i] != NULL)
	{
		compteur_act += compteur(strs[i]);
		i++;
	}
	compteur_act = compteur_act + (compteur(sep) * compteur_line(strs));
	dest = malloc((compteur_act) * (sizeof (char)));
	ft_cat(strs, dest, sep);
	return (dest);
}
/*
int	main(void)
{
	char	**strs;
	char	*sep;

	strs = malloc(20 * sizeof (char *));
	sep = " | ";
	strs[0] = "ca";
	strs[1] = "test des";
	strs[2] = "trucs";
	strs[3] = NULL;
	printf("%s", ft_strjoin(0, strs, sep));
	return (0);
}
*/
