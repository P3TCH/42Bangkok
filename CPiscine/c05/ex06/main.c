/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 03:18:22 by snamesst          #+#    #+#             */
/*   Updated: 2022/05/16 03:23:25 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	printf("-1 = %d\n", ft_is_prime(-1));
	printf("2 = %d\n", ft_is_prime(2));
	printf("15 = %d\n", ft_is_prime(15));
	printf("17 = %d\n", ft_is_prime(17));
	printf("30 = %d\n", ft_is_prime(30));
	printf("23 = %d\n", ft_is_prime(23));
	printf("1 = %d\n", ft_is_prime(1));
	printf("304 = %d\n", ft_is_prime(304));
	printf("541 = %d\n", ft_is_prime(541));
}
