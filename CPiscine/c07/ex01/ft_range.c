/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:33:49 by snamesst          #+#    #+#             */
/*   Updated: 2022/05/19 23:40:07 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*re;
	int	i;
	int	j;

	j = min;
	i = 0;
	re = (int *)malloc(sizeof(int *) * (max - min + 1));
	while (min <= max)
	{
		re[i] = min;
		min++;
		i++;
	}
	return (re);
}
