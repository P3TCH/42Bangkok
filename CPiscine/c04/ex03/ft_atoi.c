/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 01:59:24 by snamesst          #+#    #+#             */
/*   Updated: 2022/05/13 01:54:24 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_pow(int num)
{
	int	i;
	int	re;

	re = 1;
	i = 1;
	while (i < num)
	{
		re = re * 10;
		i++;
	}
	return (re);
}

int	ft_int(char *str_int, int len, int checklob)
{
	int	i;
	int	ans;
	int	j;

	ans = 0;
	i = len - 1;
	j = 1;
	while (i >= 0)
	{
		ans += (str_int[i] - '0') * ft_pow(j);
		i--;
		j++;
	}
	if (checklob % 2 == 1)
		return (-ans);
	return (ans);
}

int	ft_space(char *str, int i)
{
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' \
			|| str[i] == '\f' || str[i] == '\r' \
			|| str[i] == ' ')
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int		i;
	int		checklob;
	int		j;
	int		ans;
	char	store_int[10];

	checklob = 0;
	i = 0;
	ans = 0;
	i = ft_space(str, i);
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			checklob++;
		i++;
	}
	j = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		store_int[j] = str[i];
		j++;
		i++;
	}
	ans = ft_int(store_int, j, checklob);
	return (ans);
}
