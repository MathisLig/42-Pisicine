/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:17:58 by mligout           #+#    #+#             */
/*   Updated: 2023/07/17 20:33:19 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	if (index > 1)
		return (ft_fibonacci(index - 2) + ft_fibonacci(index -1));
	return (0);
}
/*
int	main (void)
{
	printf("%d", ft_fibonacci(8));
	return (0);
}
*/
