/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 03:02:08 by snamesst          #+#    #+#             */
/*   Updated: 2022/05/10 18:55:10 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != 0)
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	sizeofdest;

	sizeofdest = ft_strlen(dest);
	i = ft_strlen(dest);
	j = 0;
	if (size <= 1)
		return (ft_strlen(src) + size);
	while (i < size - 1 && src[j] != 0)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = 0;
	if (sizeofdest < size)
		return (ft_strlen(src) + sizeofdest);
	else
		return (ft_strlen(src) + size);
}
