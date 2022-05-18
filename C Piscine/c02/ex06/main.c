/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 03:41:32 by snamesst          #+#    #+#             */
/*   Updated: 2022/05/06 21:49:24 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	a[] = "fg415A";
	char	b[] = "asd\nas";

	printf("ans1 : %d\n",ft_str_is_printable(a));
	printf("ans2 : %d\n",ft_str_is_printable(b));
}
