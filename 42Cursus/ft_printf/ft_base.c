/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <snamesst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 02:02:12 by snamesst          #+#    #+#             */
/*   Updated: 2022/09/16 21:03:37 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putbase_p(unsigned long n, char *base)
{
	int	len;

	len = 0;
	len += ft_putstr("0x");
	len += ft_putbase_u(n, base);
	return (len);
}

int	ft_putbase_u(unsigned long n, char *base)
{
	unsigned long	base_len;
	int				len;

	len = 0;
	base_len = ft_strlen(base);
	if (n >= base_len)
		len += ft_putbase(n / base_len, base);
	n = n % base_len;
	len += write(1, &base[n], 1);
	return (len);
}

int	ft_putbase(long long n, char *base)
{
	int	base_len;
	int	len;

	len = 0;
	base_len = ft_strlen(base);
	if (n < 0)
	{
		len += write(1, "-", 1);
		n = n * -1;
	}
	if (n >= base_len)
		len += ft_putbase(n / base_len, base);
	n = n % base_len;
	len += write(1, &base[n], 1);
	return (len);
}
