/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <snamesst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:01:26 by snamesst          #+#    #+#             */
/*   Updated: 2022/08/02 17:09:36 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordlen(char *str, int in, char c)
{
	int	i;
	int	count;

	i = in;
	count = 0;
	while (str[i] != 0 && c != str[i])
	{
		i++;
		count++;
	}
	return (count);
}

int	ft_malloc(char *splited, char *str, char c, int i)
{
	int	j;

	j = 0;
	while (str[i] != 0 && c != str[i])
	{
		splited[j] = str[i];
		j++;
		i++;
	}
	splited[j] = 0;
	return (i);
}

int	ft_allword(char *str, char c)
{
	int	i;
	int	j;
	int	checker;

	i = 0;
	j = 0;
	checker = 0;
	while (str[i] != 0)
	{
		if (str[i] != c && checker == 0)
		{
			checker = 1;
			j++;
		}
		else if (str[i] == c)
			checker = 0;
		i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**splited;
	char	*ss;
	int		i;
	int		j;

	i = 0;
	j = 0;
	ss = (char *)s;
	splited = malloc(sizeof(char *) * (ft_allword(ss, c) + 1));
	if (splited == 0)
		return (0);
	while (ss[i] != 0)
	{
		while (c == ss[i])
			i++;
		if (ss[i] != 0)
		{
			splited[j] = malloc(ft_wordlen(ss, i, c) + 1);
			i = ft_malloc(splited[j], ss, c, i);
			j++;
		}
	}
	splited[j] = 0;
	return (splited);
}
