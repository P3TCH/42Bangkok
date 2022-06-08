/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <snamesst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:22:19 by snamesst          #+#    #+#             */
/*   Updated: 2022/06/07 16:22:19 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*un_s;
	size_t			i;

	i = 0;
	un_s = (unsigned char *)s;
	while (i < n)
	{
		un_s[i] = 0;
		i++;
	}
	s = un_s;
}
