/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 00:29:41 by snamesst          #+#    #+#             */
/*   Updated: 2022/05/14 00:37:53 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		i;
	long	sum;
	int		ans;

	i = 1;
	sum = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		if (sum > 2147483647)
			return (0);
		sum = sum * i;
		i++;
	}
	ans = sum;
	return (ans);
}
