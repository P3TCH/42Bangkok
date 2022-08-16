/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <snamesst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:55:27 by snamesst          #+#    #+#             */
/*   Updated: 2022/06/08 23:55:27 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srcsize;

	i = 0;
	srcsize = 0;
	while (src[srcsize] != 0)
		srcsize++;
	if (dstsize == 0)
		return (srcsize);
	while (i < dstsize - 1)
	{
		if (src[i] != 0)
			dst[i] = src[i];
		else
			break ;
		i++;
	}
	dst[i] = 0;
	return (srcsize);
}
