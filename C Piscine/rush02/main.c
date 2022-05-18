/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 04:19:21 by snamesst          #+#    #+#             */
/*   Updated: 2022/05/15 12:48:02 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.h"

int	ft_checknum(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

void	len3_normal(char *argv, char *c, int len, int first)
{
	char	*a;
	char	*x;

	a = (char *)malloc(100);
	x = (char *)malloc(100);
	hundred_re_char(a, len);
	x = ft_charstr(c, argv[first]);
	x = ft_split(x);
	ft_putstr(x);
	write(1, " ", 1);
	x = ft_strstr(c, a);
	x = ft_split(x);
	ft_putstr(x);
	write(1, " ", 1);
	free(a);
	free(x);
}

void	len3_tencase(char *argv, char *c, int len, int first)
{
	char	*a;
	char	*x;

	a = (char *)malloc(100);
	x = (char *)malloc(100);
	hundred_re_char(a, len - 1);
	x = ft_charstr(c, argv[first]);
	x = ft_split(x);
	ft_putstr(x);
	write(1, " ", 1);
	hundred_re_char(a, 2);
	x = ft_strstr(c, a);
	x = ft_split(x);
	ft_putstr(x);
	write(1, " ", 1);
	hundred_re_char(a, len - 1);
	x = ft_strstr(c, a);
	x = ft_split(x);
	ft_putstr(x);
	write(1, " ", 1);
	free(a);
	free(x);
}

int	len3(char *argv, char *c, int len, int first)
{
	char	*x;
	char	*a;

	a = (char *) malloc(100 * sizeof(char));
	x = (char *) malloc(100 * sizeof(char));
	if (len < 1)
	{
		free(a);
		free(x);
		return (0);
	}
	else if (argv[first] > '0')
	{
		if (len == 1)
			len1_in3(argv, c, first);
		else if (len == 2)
		{
			len2_in3(argv, c, first);
			free(a);
			free(x);
			return (0);
		}
		else if (len == 5 || len == 8 || len == 11 || len == 14 || len == 17 \
				|| len == 20 || len == 23 || len == 26 || len == 29 \
				|| len == 32 || len == 35)
			len3_tencase(argv, c, len, first);
		else if (len == 6 || len == 9 || len == 12 || len == 15 || len == 18 \
				|| len == 21 || len == 24 || len == 27 || len == 30 \
				|| len == 33 || len == 36)
			len3_hundredcase(argv, c, len, first);
		else
			len3_normal(argv, c, len, first);
		len3(argv, c, len - 1, first + 1);
	}
	else
		len3(argv, c, len - 1, first + 1);
	free(a);
	free(x);
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	int		len;
	int		fdinput;
	char	*c;
	char	*dict;

	dict = (char *) malloc(8);
	if (argc < 2 || argc > 3)
		write(1, "Error\n", 6);
	else if (argv[1][0] == '-')
		write(1, "Error\n", 6);
	else if (argc == 3)
	{
		dict = (char *) malloc(ft_strlen(argv[1]) + 1);
		dict = argv[1];
	}
	else if (argc == 2)
		dict = "numbers.dict";
	if (argc == 3 || argc == 2)
	{
		if (ft_checknum(argv[argc - 1]))
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i = ft_intlen(dict);
		c = (char *) malloc(i * sizeof(char));
		fdinput = open(dict, O_RDONLY);
		if (fdinput == -1)
			return (0);
		read(fdinput, c, i);
		close(fdinput);
		len = ft_strlen(argv[argc - 1]);
		if (len == 1)
			len1(argv[argc - 1][0], c);
		else if (len == 2)
			len2(argv[argc - 1], c);
		else if (len > 2)
		{
			len3(argv[argc - 1], c, len, 0);
			write(1, "\n", 1);
		}
		free(c);
	}
	return (0);
}
