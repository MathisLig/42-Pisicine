/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 20:15:58 by mligout           #+#    #+#             */
/*   Updated: 2023/07/17 20:32:16 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	resultat;

	resultat = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		resultat = 1;
	else if (power > 1)
	{
		resultat = nb * (ft_recursive_power(nb, (power - 1)));
	}
	return (resultat);
}
/*
int	main(void)
{
	printf("%d", ft_recursive_power(5, 12));
	return(0);
}
*/
