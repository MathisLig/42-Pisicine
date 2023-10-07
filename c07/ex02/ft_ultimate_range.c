/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:59:45 by mligout           #+#    #+#             */
/*   Updated: 2023/07/25 16:58:08 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*dest;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	dest = malloc((max - min) * sizeof (int));
	if (dest == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (i < max - min)
	{
		dest[i] = min + i;
		i++;
	}
	*range = dest;
	return (i);
}
/*
int     main(void)
{
        int     min;
        int     max;
        int     *dest;
	int	a;
        int     i;

        i = 0;
	a = 0;
        min = 2;
        max = 10;
        a = ft_ultimate_range(&dest, min, max);
        while (i < max - min)
        {
                printf("%d",dest[i]);
                i++;
        }
	printf("\n%d", a);
        free (dest);
        return (0);
}
*/
