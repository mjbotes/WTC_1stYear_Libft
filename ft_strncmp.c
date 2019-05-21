/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:44:54 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/21 09:29:58 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char const *s1, char const *s2, size_t len)
{
	size_t		loop;
	int			diff;

	loop = 0;
	if (len == 0)
		return (0);
	diff = (unsigned char)s1[loop] - (unsigned char)s2[loop];
	while (diff == 0 && loop < len - 1 && s1[loop] && s2[loop])
	{
		loop++;
		diff = (unsigned char)s1[loop] - (unsigned char)s2[loop];
	}
	return (diff);
}
