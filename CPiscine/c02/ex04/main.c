/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 03:36:31 by snamesst          #+#    #+#             */
/*   Updated: 2022/05/06 21:47:56 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	a[] = "sdfasd";
	char	b[] = "asAdaa";

	printf("ans1 : %d\n",ft_str_is_lowercase(a));
	printf("ans2 : %d\n",ft_str_is_lowercase(b));
}
