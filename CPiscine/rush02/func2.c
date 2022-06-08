/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 04:42:36 by snamesst          #+#    #+#             */
/*   Updated: 2022/05/15 05:02:17 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.h"

void	hundred_re_char(char *str, int len)
{
	int	i;

	i = len - 1;
	str[len] = 0;
	while (i >= 0)
	{
		if (i == 0)
			str[i] = '1';
		else
			str[i] = '0';
		i--;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	len1(char argv, char *c)
{
	char	*x;

	x = (char *) malloc(100 * sizeof(char));
	x = ft_charstr(c, argv);
	x = ft_split(x);
	ft_putstr(x);
	write (1, "\n", 1);
	free(x);
}

void	len2_2(char *argv, char *c)
{
	char	*x;
	char	*a;

	a = (char *) malloc(3 * sizeof(char));
	x = (char *) malloc(100 * sizeof(char));
	a[0] = argv[0];
	a[1] = '0';
	a[2] = 0;
	x = ft_strstr(c, a);
	x = ft_split(x);
	ft_putstr(x);
	if (argv[1] != '0')
	{
		write (1, " ", 1);
		x = ft_charstr(c, argv[1]);
		x = ft_split(x);
		ft_putstr(x);
		write (1, "\n", 1);
	}
	else
		write (1, "\n", 1);
	free(a);
	free(x);
}

void	len2(char *argv, char *c)
{
	char	*x;
	char	*a;

	a = (char *) malloc(100 * sizeof(char));
	x = (char *) malloc(100 * sizeof(char));
	if (argv[0] == '1')
	{
		a[0] = argv[0];
		a[1] = argv[1];
		a[2] = 0;
		x = ft_strstr(c, a);
		x = ft_split(x);
		ft_putstr(x);
		write (1, "\n", 1);
	}
	else
		len2_2(argv, c);
	free(a);
	free(x);
}
