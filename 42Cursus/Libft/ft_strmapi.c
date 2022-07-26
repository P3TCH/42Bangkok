/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <snamesst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 21:36:37 by snamesst          #+#    #+#             */
/*   Updated: 2022/07/26 21:36:37 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*ss;
	unsigned int		i;

	i = 0;
	ss = malloc(ft_strlen(s) + 1);
	while (s[i] != 0)
	{
		ss[i] = f(i, s[i]);
		i++;
	}
	ss[i] = 0;
	return (ss);
}
