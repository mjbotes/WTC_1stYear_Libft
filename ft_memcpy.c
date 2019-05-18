/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:39:18 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/18 13:49:39 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char	*ptr;
	unsigned char	*ptr2;
	size_t			loop;

	loop = 0;
	ptr = (unsigned char*)dest;
	ptr2 = (unsigned char*)src;
	while (loop < len)
	{
		ptr[loop] = ptr2[loop];
		loop++;
	}
	return (dest);
}
