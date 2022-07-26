/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 00:38:47 by snamesst          #+#    #+#             */
/*   Updated: 2022/05/20 00:40:54 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char *str, char *charset);

int	main(void)
{
	char	**re;
	int		i;

	i = 0;
	re = ft_split("Hello World\n42 Bangkok", " \n");
	while (re[i] != 0)
	{
		printf("%s\n", re[i]);
		i++;
	}
}
