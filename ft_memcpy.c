/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:39:18 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/17 11:24:27 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char	*ptr;
	size_t		loop;

	ptr = (unsigned char*)dest;
	loop = 0;
	while (loop < len)
	{
		*ptr = *src;
		loop++;
		ptr++;
		src++;
	}
	return (dest);
}
