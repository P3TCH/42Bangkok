/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 15:41:55 by snamesst          #+#    #+#             */
/*   Updated: 2022/04/30 21:09:29 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_first(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar('A');
		}
		else if (i == x - 1)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		i++;
	}
	ft_putchar(10);
}

void	ft_mid(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y - 2)
	{
		j = 0;
		while (j < x)
		{
			if (j == 0 || j == x - 1)
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
			j++;
		}
		ft_putchar(10);
		i++;
	}
}

void	ft_last(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar('A');
		}
		else if (i == x - 1)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		i++;
	}
	ft_putchar(10);
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_first(x);
		ft_mid(x, y);
		if (y > 1)
		{
			ft_last(x);
		}
	}
}
