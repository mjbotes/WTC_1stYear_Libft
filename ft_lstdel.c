/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 12:43:06 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/21 09:30:42 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*ptr;
	t_list	*next;

	ptr = *alst;
	while (ptr->next != NULL)
	{
		next = ptr->next;
		ft_lstdelone(&ptr, del);
		ptr = next;
	}
	ft_lstdelone(&ptr, del);
	*alst = NULL;
}
