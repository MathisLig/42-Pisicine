/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwisniew <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 22:40:06 by bwisniew          #+#    #+#             */
/*   Updated: 2023/07/23 22:19:02 by bwisniew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	get_file_size(char *file)
{
	int		i;
	int		size;
	int		fd;
	char	c;

	i = 0;
	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (-1);
	size = 1;
	while (size)
	{
		size = read(fd, &c, 1);
		if (size < 0)
			return (-1);
		i++;
	}
	fd = close(fd);
	if (fd < 0)
		return (-1);
	return (i);
}

int	read_file(int fd, int size, char *str)
{
	size = read(fd, str, size);
	if (size < 0)
	{
		free(str);
		close(fd);
		return (-1);
	}
	str[size] = '\0';
	fd = close(fd);
	if (fd < 0)
	{
		free(str);
		return (-1);
	}
	return (0);
}

char	*file_to_string(char *file)
{
	int		fd;
	int		size;
	char	*str;

	size = get_file_size(file);
	if (size < 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		free(str);
		return (NULL);
	}
	size = read_file(fd, size, str);
	if (size < 0)
	{
		return (NULL);
	}
	return (str);
}
