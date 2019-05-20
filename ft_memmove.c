/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 13:13:04 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/20 16:27:54 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				loop;
	unsigned char		*ptr_dst;
	unsigned char		*ptr_src;

	ptr_dst = (unsigned char*)dst;
	ptr_src = (unsigned char*)src;
	loop = 0;
	if (ptr_dst > ptr_src)
	{
		while (len-- > 0)
			loop++;
		while (loop--)
			ptr_dst[loop] = ptr_src[loop];
	}
	else
		while (len > loop)
		{
			ptr_dst[loop] = ptr_src[loop];
			loop++;
		}
	return (ptr_dst);
}
