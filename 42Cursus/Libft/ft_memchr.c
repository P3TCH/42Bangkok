/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <snamesst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:42:00 by snamesst          #+#    #+#             */
/*   Updated: 2022/06/09 15:42:00 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*temp_s;
	unsigned char		temp_c;
	size_t				i;

	i = 0;
	temp_s = s;
	temp_c = c;
	while (i < n)
	{
		if (temp_s[i] == temp_c)
			return ((void *)&temp_s[i]);
		i++;
	}
	return (0);
}
