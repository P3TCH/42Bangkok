/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 03:03:02 by snamesst          #+#    #+#             */
/*   Updated: 2022/05/16 03:03:20 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(-5));
	printf("%d\n", ft_iterative_factorial(10));
	printf("%d\n", ft_iterative_factorial(12));
	printf("%d\n", ft_iterative_factorial(13));
	printf("%d\n", ft_iterative_factorial(14));
}
