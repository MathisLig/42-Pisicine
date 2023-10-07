/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 09:19:39 by domartin          #+#    #+#             */
/*   Updated: 2023/07/16 16:43:18 by domartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strlen(char *str);

int	ft_verif_arg(int argc, char *argv[])
{
	int	error;
	int	i;

	error = 404;
	if (ft_strlen(argv[1]) == 31 && argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if (((i % 2 != 0) && (argv[1][i] == ' ')) ||
			((i % 2 == 0) && (argv[1][i] >= '1') && (argv[1][i] <= '4')))
			{
				i++;
			}
			else
				return (error);
		}
		return (1);
	}
	return (error);
}

/*
int     main(int argc, char *argv[])
{
	if (ft_verif_arg(argc, argv) != 404)
		ft_putchar('1');
	else
		ft_putchar('0');
	return (0);
}*/
