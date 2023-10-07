/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:10:20 by mligout           #+#    #+#             */
/*   Updated: 2023/07/24 12:19:34 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
/*
int	main(void)
{
	char	str[25] = "";
	printf("%d", ft_strlen(str));
	return (0);
}*/
