/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 13:12:54 by mligout           #+#    #+#             */
/*   Updated: 2023/07/11 10:15:23 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int a;
	int b;
	int c;
	int d;

	a = -5;
	b = 2;
	c = 0;
	d = 0;
	ft_div_mod(a, b, &c, &d);
	printf("%d , %d",c ,d);
	return (0);
}
*/
