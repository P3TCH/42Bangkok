/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:28:26 by snamesst          #+#    #+#             */
/*   Updated: 2022/05/18 11:35:29 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*x;
	int		i;

	i = 0;
	x = malloc(ft_len(src) + 1);
	while (src[i] != 0)
	{
		x[i] = src[i];
		i++;
	}
	x[i] = 0;
	return (x);
}
