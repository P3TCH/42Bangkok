/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <snamesst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 23:02:49 by snamesst          #+#    #+#             */
/*   Updated: 2022/07/26 23:25:09 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nn;

	nn = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		nn = nn * -1;
	}
	if (nn > 9)
		ft_putnbr_fd(nn / 10, fd);
	nn = (nn % 10) + '0';
	write(fd, &nn, 1);
}
