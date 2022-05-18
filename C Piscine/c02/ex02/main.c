/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 03:20:47 by snamesst          #+#    #+#             */
/*   Updated: 2022/05/06 21:46:47 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	a[] = "asdasa";
	char	b[] = "abc0da";

	printf("ans1 : %d\n",ft_str_is_alpha(a));
	printf("ans2 : %d\n",ft_str_is_alpha(b));
}
