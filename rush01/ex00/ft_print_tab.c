/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 09:14:22 by domartin          #+#    #+#             */
/*   Updated: 2023/07/16 09:17:17 by domartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_tab(int tab[4][4])
{
	int	column;
	int	line;

	column = 0;
	while (column < 4)
	{
		line = 0;
		while (line < 4)
		{
			ft_putchar(tab[column][line] + 48);
			if (line < 3)
				ft_putchar(' ');
			line++;
		}
		ft_putchar('\n');
		column++;
	}
}

/*
int     main(void)
{
	int     tab[4][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
	ft_print_tab(tab);
	return (0);
}*/
