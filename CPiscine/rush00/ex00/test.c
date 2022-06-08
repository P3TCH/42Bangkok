/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 13:11:30 by snamesst          #+#    #+#             */
/*   Updated: 2022/05/01 16:43:27 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	main(void)
{
	int		input_x;
	int		input_y;
	char	i_to_c_x;
	char	i_to_c_y;

	read(1, &i_to_c_x, 1);
	input_x = i_to_c_x;
	input_x = input_x - 48;
	read(1, &i_to_c_y, 1);
	input_y = i_to_c_y;
	input_y = input_y - 48;
	//rush(input_x, input_y);
	return (0);
}
