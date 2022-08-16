/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <snamesst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 02:33:11 by snamesst          #+#    #+#             */
/*   Updated: 2022/06/08 02:33:11 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*temp_dst;
	const char	*temp_src;
	size_t		i;

	i = len;
	temp_dst = dst;
	temp_src = src;
	if (dst == src)
		return (dst);
	if (temp_src > temp_dst)
	{
		ft_memcpy(temp_dst, temp_src, len);
		return (dst);
	}
	while (i != 0)
	{
		i--;
		temp_dst[i] = temp_src[i];
	}
	return (dst);
}
