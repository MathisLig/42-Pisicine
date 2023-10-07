/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:26:06 by domartin          #+#    #+#             */
/*   Updated: 2023/07/16 19:54:14 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
TENTATIVE CHECK LIGNE + COLOGNE NO DOUBLON
int	ft_check_line(int *tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i][j] < tab[4])
	{
		j = 0;
		while (tab[i][j] < tab[i][4])
		{
			if ((tab[i][j] == tab[i][j + 1]) || (tab[i][j] == tab[i][j + 2]) ||
			(tab[i][j] == tab[i][j + 3]))
				return (0);
			j++;
			if (tab[i][j] == tab[i][j + 1] || tab[i][j] == tab[i][j + 2])
				return (0);
			j++;
			if (tab[i][j] == tab[i][j + 1])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_col(int *tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[j][i] < tab[j][4])
	{
		j = 0;
		while (tab[j][i] < tab[4])
		{
			if ((tab[j][i] == tab[j + 1][i]) || (tab[j][i] == tab[j + 2][i]) ||
			(tab[j][i] == tab[j + 3][i]))
				return (0);
			j++;
			if (tab[j][i] == tab[j + 1][i] || tab[j][i] == tab[j + 2][i])
				return (0);
			j++;
			if (tab[j][i] == tab[j + 1][i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

*/
/*
int	main()
{
	int     tab[4][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};

}
*/
