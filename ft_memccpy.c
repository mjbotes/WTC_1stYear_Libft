/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:36:38 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/17 11:25:36 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	unsigned char	*ptr;
	size_t		loop;
	char		find;

	loop = 0;
	ptr = (unsigned char*)dest;
	find = (char)c;
	while(loop < len && (*src) != c)
	{
		*ptr = *src;
		loop++;
		ptr++;
		src++;
	}
	return (dest);
}
