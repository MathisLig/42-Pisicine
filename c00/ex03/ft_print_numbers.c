/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:41:36 by mligout           #+#    #+#             */
/*   Updated: 2023/07/06 10:59:00 by mligout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	nmbrstart;
	int	nmbrend;

	nmbrstart = '0';
	nmbrend = '9';
	while (nmbrstart <= nmbrend)
	{
		write(1, &nmbrstart, 1);
		nmbrstart++;
	}
}
/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
