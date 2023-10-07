/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:41:45 by mligout           #+#    #+#             */
/*   Updated: 2023/07/17 20:39:57 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	resultat;

	resultat = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		resultat = 1;
	while (power > 1)
	{
		resultat = resultat * nb;
		power--;
	}
	return (resultat);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_power(5, 12));
	return (0);
}
*/
