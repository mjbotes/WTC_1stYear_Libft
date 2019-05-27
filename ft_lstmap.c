/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 12:59:29 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/27 16:06:23 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpushback(t_list **lst, t_list *new)
{
	t_list	*ptr;

	ptr = *lst;
	if (ptr == NULL)
		ft_lstadd(lst, new);
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
	}
}

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ptr;

	while (lst != NULL)
	{
		ft_lstpushback(&ptr, f(lst));
		lst = lst->next;
	}
	return (ptr);
}
