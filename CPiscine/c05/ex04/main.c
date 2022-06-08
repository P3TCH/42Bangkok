/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 02:41:37 by snamesst          #+#    #+#             */
/*   Updated: 2022/05/16 03:04:05 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	printf("a = %d\n", ft_fibonacci(0));
	printf("a = %d\n", ft_fibonacci(3));
	printf("a = %d\n", ft_fibonacci(10));
}
