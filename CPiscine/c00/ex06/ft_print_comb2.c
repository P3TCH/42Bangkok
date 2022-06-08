/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 20:20:06 by snamesst          #+#    #+#             */
/*   Updated: 2022/04/30 00:15:32 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_int(int n)
{
	char	s1;
	char	s2;

	s1 = '0' + (n / 10);
	s2 = '0' + (n % 10);
	write(1, &s1, 1);
	write(1, &s2, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_print_int(i);
			write(1, " ", 1);
			ft_print_int(j);
			if (i != 98)
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}
