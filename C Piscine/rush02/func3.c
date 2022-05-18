/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 04:44:00 by snamesst          #+#    #+#             */
/*   Updated: 2022/05/15 05:02:33 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.h"

void	len1_in3(char *argv, char *c, int first)
{
	char	*x;

	x = (char *) malloc(100 * sizeof(char));
	x = ft_charstr(c, argv[first]);
	x = ft_split(x);
	ft_putstr(x);
	free(x);
}

void	len2_in3_2(char *argv, char *c, int first)
{
	char	*x;
	char	*a;

	a = (char *) malloc(100 * sizeof(char));
	x = (char *) malloc(100 * sizeof(char));
	a[0] = argv[first];
	a[1] = '0';
	a[2] = 0;
	x = ft_strstr(c, a);
	x = ft_split(x);
	ft_putstr(x);
	if (argv[first + 1] != '0')
	{
		write (1, " ", 1);
		x = ft_charstr(c, argv[first + 1]);
		x = ft_split(x);
		ft_putstr(x);
	}
	free(a);
	free(x);
}

void	len2_in3(char *argv, char *c, int first)
{
	char	*x;
	char	*a;

	a = (char *) malloc(100 * sizeof(char));
	x = (char *) malloc(100 * sizeof(char));
	if (argv[first] == '1')
	{
		a[0] = argv[first];
		a[1] = argv[first + 1];
		a[2] = 0;
		x = ft_strstr(c, a);
		x = ft_split(x);
		ft_putstr(x);
	}
	else
		len2_in3_2(argv, c, first);
	free(a);
	free(x);
}

void	len3_hundredcase(char *argv, char *c, int len, int first)
{
	char	*x;
	char	*a;

	x = (char *)malloc(100);
	a = (char *)malloc(100);
	x = ft_charstr(c, argv[first]);
	x = ft_split(x);
	ft_putstr(x);
	write(1, " ", 1);
	hundred_re_char(a, 3);
	x = ft_strstr(c, a);
	x = ft_split(x);
	ft_putstr(x);
	write(1, " ", 1);
	hundred_re_char(a, len - 2);
	x = ft_strstr(c, a);
	x = ft_split(x);
	ft_putstr(x);
	write(1, " ", 1);
	free(a);
	free(x);
}
