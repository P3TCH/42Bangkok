/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <snamesst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:41:45 by snamesst          #+#    #+#             */
/*   Updated: 2022/07/26 18:41:45 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	i_len(int n)
{
	int	size;
	int	nn;

	nn = n;
	size = 0;
	if (nn == 0)
		return (1);
	while (nn != 0)
	{
		nn = nn / 10;
		size++;
	}
	return (size);
}

char	*lob_case(int len, int n)
{
	char	*itoa;

	itoa = malloc(len + 2);
	itoa[0] = '-';
	itoa[len + 1] = 0;
	while (len >= 1)
	{
		itoa[len] = ((n % 10) * -1) + '0';
		n = n / 10;
		len--;
	}
	return (itoa);
}

char	*plus_case(int len, int n)
{
	char	*itoa;

	itoa = malloc(len + 1);
	itoa[len] = 0;
	len--;
	while (len >= 0)
	{
		itoa[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (itoa);
}

char	*ft_itoa(int n)
{
	int		len;

	len = i_len(n);
	if (n < 0)
		return (lob_case(len, n));
	else
		return (plus_case(len, n));
}
