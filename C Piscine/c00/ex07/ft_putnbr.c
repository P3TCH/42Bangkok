/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 21:57:41 by snamesst          #+#    #+#             */
/*   Updated: 2022/04/29 22:50:01 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_char(char c)
{
	write(1, &c, 1);
}

void	ft_rprint(long n)
{
	int		i;
	char	s[10];

	i = 0;
	while (n > 0)
	{
		s[i] = '0' + (n % 10);
		n = n / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_print_char(s[i]);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n == 0)
	{
		write(1, "0", 1);
	}
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
		ft_rprint(n);
	}
	else
	{
		ft_rprint(n);
	}
}
