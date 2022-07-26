/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <snamesst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:35:01 by snamesst          #+#    #+#             */
/*   Updated: 2022/07/18 19:35:01 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	size_t	i;
	size_t	j;

	j = 0;
	i = (size_t)start;
	if (s == 0 || start > ft_strlen(s))
	{
		ss = malloc(1);
		ss[0] = 0;
		return (ss);
	}
	if (ft_strlen(s) - start < len)
		ss = malloc(ft_strlen(s) - start + 1);
	else
		ss = malloc(len + 1);
	while (i < ft_strlen(s) && j < len)
	{
		ss[j++] = s[i++];
	}
	ss[j] = 0;
	return (ss);
}
