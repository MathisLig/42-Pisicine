/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 09:28:10 by mligout           #+#    #+#             */
/*   Updated: 2023/07/18 10:38:48 by mligout          ###   ########.fr       */
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

	i = 1;
	while (i != argc)
	{
		a = 0;
		while (argv[i][a] != '\0')
		{
			ft_putchar(argv[i][a]);
			a++;
		}
		i++;
		ft_putchar('\n');
	}
	return (0);
}
