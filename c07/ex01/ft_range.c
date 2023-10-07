/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:26:01 by mligout           #+#    #+#             */
/*   Updated: 2023/07/25 16:54:11 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*dest;

	i = 0;
	if (min >= max)
		return (0);
	dest = malloc((max - min) * sizeof (int));
	if (dest == NULL)
		return (0);
	while (i < max - min)
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*dest;
	int	i;

	i = 0;
	min = -2;
	max = 10;
	dest = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d",dest[i]);
		i++;
	}
	free (dest);
	return (0);
}
*/
