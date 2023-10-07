/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 12:48:01 by domartin          #+#    #+#             */
/*   Updated: 2023/07/16 17:27:41 by domartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_resolv()
{
	int	i;
	int	error;

	i = 16;
	error = "error";
	while (argv[1][i])
	{
		if (i < 24 && argv[1][i] == '1') // print horizontal
		{
			if (argv[1][i + 7] == '4')
			{
				ft_putchar();
			}
			else if (argv[1][i + 7] == '3')
			{
				print 2 soluce;
			}
			else if (argv[1][i + 7] == '2')
			{
				print 2 soluce;
			}
			else
				return (error);
		}
		if (i < 24 && argv[1][i] == '2')
		{
			if (argv[1][i + 7] == '2')
			{
				print x soluce;
			}
			else if (argv[1][i + 7] == '3')
			{
				print x soluce;
			}
			else if (argv[1][i + 7] == '1')
			{
				print x soluce;
			}
			else
				return (error);
		}
		if (i < 24 && argv[1][i] == '3')
		{
			if (arg[1][i + 7] == '2')
			{
				print x soluce;
			}
			else if (argv[1][i + 7] == '1')
			{
				print x soluce;
			}
			else
				return (error);
		}
		if (i < 24 && argv[1][i] == '4')
		{
			if (argv[1][i + 7] == '4')
			{
				print 1 soluce;
			}
			else
				return (error);
		}
		i++;
	}

	i = 0;
	error = "error";
	while (argv[1][i])
	{
		if (i < 8 && argv[1][i] == '1') // print vertical
		{
			if (argv[1][i + 8] == '4')
			{
				print 1 soluce;
			}
			else if (argv[1][i + 8] == '3')
			{
				print 2 soluce;
			}
			else if (argv[1][i + 8] == '2')
			{
				print 2 soluce;
			}
			else
				return (error);
		}
		if (i < 8 && argv[1][i] == '2')
		{
			if (argv[1][i + 8] == '2')
			{
				print x soluce;
			}
			else if (argv[1][i + 8] == '3')
			{
				print x soluce;
			}
			else if (argv[1][i + 8] == '1')
			{
				print x soluce;
			}
			else
				return (error);
		}
		if (i < 8 && argv[1][i] == '3')
		{
			if (arg[1][i + 8] == '2')
			{
				print x soluce;
			}
			else if (argv[1][i + 8] == '1')
			{
				print x soluce;
			}
			else
				return (error);
		}
		if (i < 8 && argv[1][i] == '4')
		{
			if (argv[1][i + 8] == '4')
			{
				print 1 soluce;
			}
			else
				return (error);
		}
		i++;
	}
}
