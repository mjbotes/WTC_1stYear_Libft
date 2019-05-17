/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:40:40 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/17 11:23:59 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict str1, const char *restrict str2)
{
	size_t	loop;
	size_t	inloop;
	char	*src;
	
	src = (char *)str2;
	loop = 0;
	inloop = 0;
	while (str1[loop] != '\0')
		loop++;
	while (src[inloop] != '\0')
	{
		str1[loop] = src[inloop];
		loop++;
		inloop++;
	}
	str1[loop] = '\0';
	return (str1);
}
