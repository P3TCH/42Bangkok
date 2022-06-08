/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 03:38:45 by snamesst          #+#    #+#             */
/*   Updated: 2022/05/06 21:48:47 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	a[] = "ASDFDS";
	char	b[] = "asdASc";

	printf("ans1 : %d\n",ft_str_is_uppercase(a));
	printf("ans2 : %d\n",ft_str_is_uppercase(b));
}
