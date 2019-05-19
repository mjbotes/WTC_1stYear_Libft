/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:44:54 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/19 10:12:14 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(char const *restrict s1, char const *restrict s2, size_t len)
{
	size_t		loop;
	int		diff;

	loop = 0;
	diff = 0;
	while(diff == 0 && loop < len && s1[loop] != '\0')
	{
		loop++;
		diff = (unsigned char)s1[loop] - (unsigned char)s2[loop];
	}
	return (diff);
}
