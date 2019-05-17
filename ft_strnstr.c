/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:46:22 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/17 13:09:54 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	char	*ptr1;
	size_t	loop;
	size_t	inloop;

	loop = 0;
	while (str1[loop] != '\0' && loop < len)
	{
		inloop = 0;
		while (str2[inloop] == str1[loop + inloop] && loop + inloop < len)
		{
			if (str2[inloop + 1] == '\0')
				return (str1[loop]);
			inloop++;
		}
		loop++;
	}
	return (NULL);
}
