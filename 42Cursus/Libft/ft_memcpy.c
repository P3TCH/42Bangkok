/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <snamesst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:45:24 by snamesst          #+#    #+#             */
/*   Updated: 2022/06/07 16:45:24 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*temp_dst;
	const char	*temp_src;
	size_t		i;

	temp_dst = (char *)dst;
	temp_src = (const char *)src;
	i = 0;
	if (dst == 0 || src == 0)
		return (0);
	else if ((dst == src) || n == 0)
		return (dst);
	while (i < n)
	{
		temp_dst[i] = temp_src[i];
		i++;
	}
	return (dst);
}
