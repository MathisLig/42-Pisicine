/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 16:11:54 by mligout           #+#    #+#             */
/*   Updated: 2023/07/11 10:23:47 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	compte;

	compte = 0;
	while (*str != '\0')
	{
		compte++;
		str++;
	}
	return (compte);
}
/*
int	main(void)
{
	char	str[5] = {'T', 'e', 's', 't', '\0'};
	printf("%d", ft_strlen(str));
	return (0);
}
*/
