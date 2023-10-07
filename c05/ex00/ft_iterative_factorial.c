/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:04:28 by mligout           #+#    #+#             */
/*   Updated: 2023/07/17 20:28:57 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	a;

	a = 1;
	while (nb > 0)
	{
		a = a * nb;
		nb = nb - 1;
	}
	if (nb < 0)
		return (0);
	return (a);
}
/*
int	main(void)
{
	int	i;

	i = 5;
	printf("%d", ft_iterative_factorial(i));
	return (0); 
}
*/
