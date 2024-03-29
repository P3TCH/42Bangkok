/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <snamesst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 23:30:04 by snamesst          #+#    #+#             */
/*   Updated: 2022/07/27 01:19:25 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mall;

	if (count * size < count && count * size < size)
		return (0);
	mall = malloc(count * size);
	if (mall == 0)
		return (0);
	ft_bzero(mall, count * size);
	return (mall);
}
