/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwisniew <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 12:43:52 by bwisniew          #+#    #+#             */
/*   Updated: 2023/07/23 23:06:00 by bwisniew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_reset_dict(char **dict, int i_dict)
{
	int	i;

	i = 0;
	while (i < i_dict)
	{
		free(dict[i]);
		i++;
	}
	free(dict);
}

void	free_dict(char **dict)
{
	int	i;

	i = 0;
	while (dict[i] != NULL)
	{
		free(dict[i]);
		i++;
	}
	free(dict);
}

char	*verif_input(int argc, char **argv, char *file)
{
	if (argc < 2 || argc > 3)
	{
		ft_putstr("error\n");
		return (NULL);
	}
	argv[argc - 1] = ft_verif_input(argv[argc - 1]);
	if (argv[argc - 1] == NULL)
	{
		ft_putstr("error\n");
		return (NULL);
	}
	if (argc == 2)
		file = file_to_string("numbers.dict");
	else if (argc == 3)
		file = file_to_string(argv[1]);
	if (file == NULL)
	{
		ft_putstr("Dict Error\n");
		return (NULL);
	}
	return (file);
}

int	main(int argc, char **argv)
{
	char	**dict;
	char	*file;

	file = NULL;
	file = verif_input(argc, argv, file);
	if (file == NULL)
		return (1);
	dict = create_dict(file);
	if (dict == NULL)
	{
		ft_putstr("Dict Error\n");
		return (2);
	}
	if (ft_split_num(argv[argc - 1], dict) < 0)
	{
		free_dict(dict);
		ft_putstr("Dict Error\n");
		return (3);
	}
	ft_putstr("\n");
	free_dict(dict);
	return (0);
}
