/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:38:08 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/17 09:38:22 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t len)
{
	int	diff;
	size_t	loop;

	loop = 0;
	while(diff == 0 && loop<len)
	{
		diff = *str1 - *str2;
		str1++;
		str2++;
		loop++;
	}
	return (diff);
}
