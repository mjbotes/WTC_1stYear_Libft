/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:40:11 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/17 09:40:24 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pr, int value, size_t len)
{
	unsigned char	*ptr;
	size_t		loop;

	ptr = (unsigned char*)pr;
	loop=0;
	while (loop++ < len)
	{
		*ptr = value;
		ptr++;
	}
	return (pr);
}
