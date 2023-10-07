/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:45:08 by mligout           #+#    #+#             */
/*   Updated: 2023/07/13 09:00:00 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while ((str[a] != '\0') && (b == 1))
	{
		if ((str[a] >= 'a') && (str[a] <= 'z'))
			b = 1;
		else
			b = 0;
		a++;
	}
	return (b);
}
/*
int	main(void)
{
	int	b;

	b = ft_str_is_lowercase("eeeeee-");
		printf("%d", b);
	return (0);
}
*/
