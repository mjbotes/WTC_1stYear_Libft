/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 10:06:36 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/17 13:11:38 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	loop;
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	loop = 0;
	if (len < len_dst +1)
		return (len_src + len);
	while (loop < len_src)
	{
		dst[len_src + loop] = src[loop];
		loop++;
	}
	dst[len_src + loop] = '\0';
	return (len_src + len_dst);
}
