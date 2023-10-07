/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 09:40:37 by mligout           #+#    #+#             */
/*   Updated: 2023/07/18 10:40:39 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	a;

	i = argc - 1;
	while (i != 0)
	{
		a = 0;
		while (argv[i][a] != '\0')
		{
			ft_putchar(argv[i][a]);
			a++;
		}
		i--;
		ft_putchar('\n');
	}
	return (0);
}
