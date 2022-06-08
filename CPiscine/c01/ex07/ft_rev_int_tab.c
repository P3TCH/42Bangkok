/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 04:18:14 by snamesst          #+#    #+#             */
/*   Updated: 2022/04/30 04:26:14 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	head;
	int	last;

	head = 0;
	last = size - 1;
	while (head < last)
	{
		ft_swap(tab + head, tab + last);
		head++;
		last--;
	}
}
