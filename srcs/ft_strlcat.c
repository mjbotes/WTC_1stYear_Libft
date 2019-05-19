/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 10:06:36 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/19 10:08:40 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	loop;
	size_t	len_dst;
	size_t	len_src;
	size_t	res;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	loop = 0;
	if (len <= len_dst)
		res = len_src + len;
	else
		res = len_src + len_dst;
	while (loop < len_src && loop + 1 < len)
	{
		dst[len_src + loop] = src[loop];
		loop++;
	}
	dst[len_src + loop] = '\0';
	return (res);
}
