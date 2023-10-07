/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:29:12 by mligout           #+#    #+#             */
/*   Updated: 2023/07/17 20:30:16 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1 ;
	if (nb > 0)
	{
		i = nb * (ft_recursive_factorial(nb - 1));
	}
	if (nb < 0)
	{
		return (0);
	}
	return (i);
}
/*
int	main(void)
{
	int	i = 5;

	printf("%d", ft_recursive_factorial(i));
	return (0);
}
*/
