/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <snamesst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:19:11 by snamesst          #+#    #+#             */
/*   Updated: 2022/08/03 15:08:54 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*now;

	new = 0;
	now = 0;
	while (lst != 0)
	{
		now = ft_lstnew(f(lst->content));
		if (now == 0)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, now);
		lst = lst->next;
	}
	return (new);
}
