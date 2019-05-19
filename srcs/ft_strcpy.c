/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 11:14:04 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/17 11:14:48 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *restrict dst, const char *restrict src)
{
	size_t	loop;

	loop = 0;
	while(src[loop] != '\0')
	{
		dst[loop] = src[loop];
		loop++;
	}
	dst[loop] = '\0';
	return (dst);
}
