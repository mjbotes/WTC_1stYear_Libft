/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:39:18 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/21 14:32:14 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			loop;

	loop = -1;
	ptr1 = (unsigned char*)src;
	ptr2 = (unsigned char*)dest;
	while (++loop < len)
		ptr2[loop] = ptr1[loop];
	return (dest);
}
