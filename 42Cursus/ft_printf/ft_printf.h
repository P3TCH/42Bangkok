/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <snamesst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 00:09:04 by snamesst          #+#    #+#             */
/*   Updated: 2022/09/16 02:14:53 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_strlen(char *str);

int		ft_nbrlen(long long n);
void	ft_putnbr(long long n);

int		ft_putbase(long long n, char *base);
int		ft_putbase_p(unsigned long n, char *base);
int		ft_putbase_u(unsigned long n, char *base);

int 	ft_printf_check(char input, va_list args);
int		ft_printf(const char *format, ...);

#endif
