/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <snamesst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:33:53 by snamesst          #+#    #+#             */
/*   Updated: 2022/09/16 02:22:00 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf_check(char input, va_list args)
{
	if (input == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (input == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (input == 'p')
		return (ft_putbase_p(va_arg(args, unsigned long), "0123456789abcdef"));
	else if (input == 'd')
		return (ft_nbrlen(va_arg(args, int)));
	else if (input == 'i')
		return (ft_nbrlen(va_arg(args, int)));
	else if (input == 'u')
		return (ft_nbrlen(va_arg(args, unsigned int)));
	else if (input == 'x')
		return (ft_putbase(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (input == 'X')
		return (ft_putbase(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (input == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			len += ft_printf_check(format[i], args);
		}
		else
		{
			len += ft_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (len);
}
