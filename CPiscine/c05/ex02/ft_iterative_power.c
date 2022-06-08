/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 00:48:43 by snamesst          #+#    #+#             */
/*   Updated: 2022/05/16 16:28:50 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	n = nb;
	i = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power - 1)
	{
		n = n * nb;
		i++;
	}
	return (n);
}
