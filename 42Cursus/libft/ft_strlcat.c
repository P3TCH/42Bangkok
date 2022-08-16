/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <snamesst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 00:03:46 by snamesst          #+#    #+#             */
/*   Updated: 2022/07/27 01:02:42 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	sizeofdst;

	sizeofdst = ft_strlen(dst);
	i = ft_strlen(dst);
	j = 0;
	if (dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	while (i < dstsize - 1 && src[j] != 0)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = 0;
	if (sizeofdst < dstsize)
		return (ft_strlen(src) + sizeofdst);
	else
		return (ft_strlen(src) + dstsize);
}
