/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:32:36 by mligout           #+#    #+#             */
/*   Updated: 2023/07/23 10:38:20 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	b;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	b = 0;
	dest_len = ft_strlen(dest);
	b = dest_len;
	src_len = ft_strlen(src);
	if ((size == 0) || (size <= b))
		return (src_len + size);
	while (src[i] != '\0' && i < size - b - 1)
	{
		dest[b] = src[i];
		i++;
		b++;
	}
	dest[b] = '\0';
	return (src_len + dest_len);
}
/*
int	main(void)
{
	char	*src = "what a time to be a live";
	char	*dest = "now";
	printf("%i", ft_strlcat(dest, src, 30));
	return (0);
}
*/
