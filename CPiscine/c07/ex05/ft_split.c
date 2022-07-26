/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:57:40 by snamesst          #+#    #+#             */
/*   Updated: 2022/05/20 00:38:05 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_relen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

int	checker(char *charset, char in)
{
	int	i;

	i = 0;
	while (charset[i] != 0)
	{
		if (charset[i] == in)
			return (1);
		i++;
	}
	return (0);
}

int	ft_wordlen(char *str, int in, char *charset)
{
	int	i;

	i = in;
	while (str[i] != 0 && !checker(charset, str[i]))
	{
		i++;
	}
	return (i);
}

int	ft_malloc(char *splited, char *str, char *charset, int i)
{
	int	j;

	j = 0;
	while (str[i] != 0 && !checker(charset, str[i]))
	{
		splited[j] = str[i];
		j++;
		i++;
	}
	splited[j] = 0;
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	char	**splited;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	splited = malloc(sizeof(char **) * (ft_relen(str) + 1));
	while (str[i] != 0)
	{
		while (checker(charset, str[i]))
			i++;
		if (str[i] != 0)
		{
			k = 0;
			splited[j] = malloc(sizeof(char *) * \
					(ft_wordlen(str, i, charset) + 1));
			i = ft_malloc(splited[j], str, charset, i);
			j++;
		}
	}
	splited[j] = 0;
	return (splited);
}
