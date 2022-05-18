/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 03:33:06 by snamesst          #+#    #+#             */
/*   Updated: 2022/05/06 21:47:34 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	a[] = "456789";
	char	b[] = "4567a9";

	printf("ans1 : %d\n",ft_str_is_numeric(a));
	printf("ans2 : %d\n",ft_str_is_numeric(b));
}
