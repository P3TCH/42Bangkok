/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func1.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 04:37:21 by snamesst          #+#    #+#             */
/*   Updated: 2022/05/15 05:01:58 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.h"

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
		write(1, "File not found\n", 15);
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
