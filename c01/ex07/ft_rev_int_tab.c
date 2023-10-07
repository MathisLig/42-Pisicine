/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:23:59 by mligout           #+#    #+#             */
/*   Updated: 2023/07/11 10:34:10 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	swap;

	a = 0;
	while (a < size / 2)
	{
		swap = tab[a];
		tab[a] = tab[size -1 - a];
		tab[size - 1 - a] = swap;
		a++;
	}
}
/*
int	main(void)
{
	int	tab[5] = {'T', 'e', 's', 't','s'};
	int	size;

	size = 5;
	ft_rev_int_tab(tab, size);
	printf("Tableau inverser : %c %c %c %c %c", 
	tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}
*/
