/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <snamesst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:00:20 by snamesst          #+#    #+#             */
/*   Updated: 2022/06/07 16:00:20 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*un_b;
	size_t			i;

	i = 0;
	un_b = b;
	while (i < len)
	{
		un_b[i] = c;
		i++;
	}
	b = un_b;
	return (b);
}
