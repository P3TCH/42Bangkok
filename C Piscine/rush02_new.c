/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 04:19:21 by snamesst          #+#    #+#             */
/*   Updated: 2022/05/15 04:23:09 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void	*ft_split(char *str)
{
	int		i;
	int		j;
	char	*re;

	re = (char *)malloc(100 * sizeof(char));
	j = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	while (str[i] <= 32 || str[i] == ':')
		i++;
	while (str[i] != '\n')
	{
		re[j++] = str[i++];
	}
	re[j -1] = 0;
	return (re);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == 0)
		return (str);
	while (*str++ != 0)
	{
		j = 0;
		if (*str != to_find[0])
		{
			i++;
			continue ;
		}
		while (to_find[j] == *(str + j))
		{
			j++;
			if (to_find[j] == 0)
				return (str);
		}
		i++;
	}
	return (0);
}

char	*ft_charstr(char *str, char to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find == 0)
		return (str);
	while (str[i] != 0)
	{
		j = 0;
		if (str[i] != to_find)
		{
			i++;
			continue ;
		}
		while (to_find == str[i])
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}

int	ft_intlen(char *dict)
{
	int		fd;
	int		i;
	char	c;

	i = 0;
	fd = open(dict, O_RDONLY);
	if (fd == -1)
	{
		write(1, "File not found", 14);
		return (0);
	}
	while (read(fd, &c, 1))
		i++;
	return (i);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

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

void	len1_in3(char *argv, char *c, int first)
{
	char	*x;

	x = (char *) malloc(100 * sizeof(char));
	x = ft_charstr(c, argv[first]);
	x = ft_split(x);
	ft_putstr(x);
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
		len2_2(argv,c);
	free(a);
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
		len2_in3_2(argv,c,first);
	free(a);
	free(x);
}

void	len3_normal(char *x, char *a, char *argv, char *c, int len, int first)
{
	hundred_re_char(a, len);
	x = ft_charstr(c, argv[first]);
       	x = ft_split(x);
	ft_putstr(x);
	write(1, " ", 1);
	x = ft_strstr(c, a);
	x = ft_split(x);
	ft_putstr(x);
	write(1, " ", 1);
}

void	len3_hundredcase(char *x, char *a, char *argv, char *c, int len, int first)
{
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
}

void	len3_tencase(char *x, char *a, char *argv, char *c, int len, int first)
{
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
}

int	len3(char *argv, char *c, int len, int first)
{
	char	*x;
	char	*a;

	a = (char *) malloc(100 * sizeof(char));
	x = (char *) malloc(100 * sizeof(char));
	if (len < 1)
		return (0);
	else if (argv[first] > '0')
	{
		if (len == 1)
			len1_in3(argv, c, first);
		else if (len == 2)
		{
			len2_in3(argv, c, first);
			return (0);
		}
		else if (len == 5 || len == 8 || len == 11 || len == 14 || len == 17 || len == 20 || \
				len == 23 || len == 26 || len == 29 || len == 32 || len == 35)
			len3_tencase(x, a, argv, c, len, first);
		else if (len == 6 || len == 9 || len == 12 || len == 15 || len == 18 || len == 21 || \
				len == 24 || len == 27 || len == 30 || len == 33 || len == 36)
			len3_hundredcase(x, a, argv, c, len, first);
		else
			len3_normal(x, a, argv, c, len, first);
		len3(argv, c, len - 1, first + 1);
	}
	else
		len3(argv, c, len - 1, first + 1);
	return (0);
	free(a);
	free(x);
}

int	main(int argc, char **argv)
{
	int		i;
	int		len;
	char	*c;
	char	*dict;

	dict = (char *)malloc(100);
	if (argv[1][0] == '-')
	{
		write(1, "Error\n", 6);
	}
	else if (argc == 3)
		dict = argv[1];
	else if (argc == 2)
		dict = "numbers.dict";
	if (argc == 3 || argc == 2)
	{
		i = ft_intlen(dict);
		c = (char *) malloc(i * sizeof(char));
		int fdInput = open(dict, O_RDONLY);
		if (fdInput == -1) {
			return (0);
		}
		read(fdInput, c, i);
		close(fdInput);
		len = ft_strlen(argv[1]);
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
