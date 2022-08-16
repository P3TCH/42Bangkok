/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <snamesst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 01:01:11 by snamesst          #+#    #+#             */
/*   Updated: 2022/07/27 01:10:04 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	checklob;
	int	ans;

	i = 0;
	ans = 0;
	checklob = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
		checklob = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != 0)
	{
		if (str[i] >= '0' && str[i] <= '9')
			ans = ans * 10 + (str[i] - '0');
		else
			break ;
		i++;
	}
	return (ans * checklob);
}
