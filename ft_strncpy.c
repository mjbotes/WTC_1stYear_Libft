/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:45:22 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/21 08:56:05 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	loop;
	char	*s;

	s = (char *)(src);
	loop = 0;
	if (src == NULL || dst == NULL)
		return (NULL);
	while (loop < len && loop < ft_strlen(src) && src[loop])
	{
		dst[loop] = s[loop];
		loop++;
	}
	while (loop < len)
	{
		dst[loop] = '\0';
		loop++;
	}
	return (dst);
}
