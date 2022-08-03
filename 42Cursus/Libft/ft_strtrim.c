/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <snamesst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:31:42 by snamesst          #+#    #+#             */
/*   Updated: 2022/08/03 16:23:10 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		first;
	int		last;
	char	*ss;

	first = 0;
	last = ft_strlen(s1);
	if (s1 == 0 || set == 0)
	{
		ss = malloc(1);
		ss[0] = 0;
		return (ss);
	}
	while (s1[first] != 0 && ft_strchr(set, s1[first]) != 0)
		first++;
	while (last != 0 && ft_strrchr(set, s1[last]) != 0)
		last--;
	return (ft_substr(s1, first, last - (first - 1)));
}
