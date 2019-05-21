/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 12:59:29 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/21 09:35:45 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*prev;
	t_list	*ptr;
	t_list	*next;
	t_list	*new;

	ptr = lst;
	next = ptr->next;
	if (!(new = f(ptr)))
		return (NULL);
	ptr = next;
	prev = new;
	while (ptr->next != NULL)
	{
		next = ptr->next;
		if (!(ptr = f(ptr)))
			return (NULL);
		prev->next = ptr;
		prev = ptr;
		ptr = next;
	}
	ptr = f(ptr);
	prev->next = ptr;
	ptr->next = NULL;
	return (new);
}
