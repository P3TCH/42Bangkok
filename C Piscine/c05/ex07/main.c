/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:48:06 by snamesst          #+#    #+#             */
/*   Updated: 2022/05/16 14:49:58 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	printf("1 = %d\n", ft_find_next_prime(1));
	printf("2147483647 = %d\n", ft_find_next_prime(2147483647));
	printf("500 = %d\n", ft_find_next_prime(500));
	printf("2 = %d\n", ft_find_next_prime(2));
	printf("9 = %d\n", ft_find_next_prime(9));
	printf("352 = %d\n", ft_find_next_prime(352));
}
