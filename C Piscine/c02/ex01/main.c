/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 03:14:41 by snamesst          #+#    #+#             */
/*   Updated: 2022/05/06 21:46:17 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *stc, unsigned int n);

int	main(void)
{
	char	a[] = "abc";
	char	c[3];
	char	*d[3];

	*d = ft_strncpy(c, a, 2);
	printf("ans : %s\n",c);
	printf("ans2 : %s\n", *d);
}
