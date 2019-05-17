/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:45:22 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/17 09:53:08 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *restrict dst, const char *restrict src, size_t len)
{
	size_t	loop;

	loop = 0;
	while(loop < len && src[loop] != '\0')
	{
		dst[loop] = src[loop];
		loop++;
	}
	return (dst);
}
