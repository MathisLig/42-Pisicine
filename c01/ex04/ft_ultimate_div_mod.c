/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 14:00:19 by mligout           #+#    #+#             */
/*   Updated: 2023/07/11 11:48:02 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temporairea;
	int	temporaireb;

	temporairea = *a;
	temporaireb = *b;
	*a = temporairea / *b;
	*b = temporairea % temporaireb;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 29;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("res_div : %d ,rest_modulo : %d", a, b);
	return (0);
}
*/
