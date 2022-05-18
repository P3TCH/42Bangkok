/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 01:59:26 by snamesst          #+#    #+#             */
/*   Updated: 2022/05/13 01:41:33 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(long n)
{
	char	number[10];
	int		i;

	i = 0;
	while (n > 0)
	{
		number[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, &number[i], 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	long	num;

	num = nb;
	if (num == 0)
		write(1, "0", 1);
	if (num < 0)
	{
		num = -num;
		write(1, "-", 1);
		ft_print(num);
	}
	else
		ft_print(num);
}
