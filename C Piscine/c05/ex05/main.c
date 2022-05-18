/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 02:59:08 by snamesst          #+#    #+#             */
/*   Updated: 2022/05/16 03:07:20 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	printf("a = %d\n", ft_sqrt(0));
	printf("b = %d\n", ft_sqrt(1));
	printf("c = %d\n", ft_sqrt(2));
	printf("d = %d\n", ft_sqrt(2147395600));
	printf("e = %d\n", ft_sqrt(2147395700));
	printf("e = %d\n", ft_sqrt(2500));
}
