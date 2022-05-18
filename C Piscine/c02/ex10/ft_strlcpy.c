/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 01:52:38 by snamesst          #+#    #+#             */
/*   Updated: 2022/05/06 22:03:13 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (src[count] != 0)
		count++;
	if (size == 0)
	{
		return (count);
	}
	while (i < size - 1)
	{
		if (src[i] != 0)
			dest[i] = src[i];
		else
			break ;
		i++;
	}
	dest[i] = 0;
	return (count);
}
