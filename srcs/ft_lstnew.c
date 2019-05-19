/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 12:09:33 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/19 12:42:34 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	const *content, size_t content_size)
{
	t_list *new;
	if(!(new = malloc(sizeof(t_list))))
		return (NULL);
	new->content=(void*)content;
	if (content == NULL)
	   new->content_size = 0;
	else	
		new->content_size = content_size;
	new->next = NULL;
	return (new);
}
