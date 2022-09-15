/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_external.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <snamesst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 00:33:56 by snamesst          #+#    #+#             */
/*   Updated: 2022/09/16 02:21:40 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		i++;
	}
	write(1, str, i);
	return (i);
}

void	ft_putnbr(long long n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * -1;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	n = (n % 10) + '0';
	write(1, &n, 1);
}

int	ft_nbrlen(long long n)
{
	int	len;

	len = 1;
	ft_putnbr(n);
	if (n < 0)
	{
		len++;
		n = n * -1;
	}
	while (n > 9)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
