/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:32:22 by mligout           #+#    #+#             */
/*   Updated: 2023/07/23 10:06:57 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	if (to_find[a] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while ((str[i + a] == to_find[a]) & (str[i + a] != '\0'))
			a++;
		if (to_find[a] == '\0')
			return (str + i);
		a = 0;
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*str = "Bonjour ceci est un test";
	char	*to_find = "est";

	printf("%s", ft_strstr(str, to_find));
	return (0);
}
*/
