/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:34:38 by mligout           #+#    #+#             */
/*   Updated: 2023/07/13 08:59:24 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (str[a] != '\0' && b == 1)
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			b = 1;
		else if (str[a] >= 'A' && str[a] <= 'Z')
			b = 1;
		else
			b = 0;
		a++;
	}
	return (b);
}
/*
//actuellement ca print le return

int	main(void)
{
int	b;

b = ft_str_is_alpha("eeee");
printf("%d", b);
return(0);
}
*/
