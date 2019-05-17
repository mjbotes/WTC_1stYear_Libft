/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:37:11 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/17 09:37:34 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t len)
{
	size_t		loop;
	unsigned char	*ptr;
	char		find;

	loop=0;
	find = (char)c;
	ptr = (unsigned char*)str;
	while (loop < len && (*ptr) == find)
	{
		loop++;
		ptr++;
	}
	if (*ptr == find)
		return (ptr);
	return (NULL);
}
