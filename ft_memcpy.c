/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:39:18 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/23 10:08:53 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char   *tmpdest;
    unsigned char   *tmpsrc;
    size_t          loop;
    
    ptrdest = (unsigned char *)dest;
    ptrsrc = (unsigned char *)src;
    i = -1;
    if (tmpsrc == NULL && tmpdest == NULL)
        return (NULL);
    while (++loop < n)
        ptrdest[i] = ptrsrc[i];
    return (dest);
}
