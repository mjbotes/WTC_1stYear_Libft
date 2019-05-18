/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:47:31 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/18 14:28:34 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	int	loop;
	int	inloop;

	loop = 0;
	while (str1[loop] != '\0')
	{
		inloop = 0;
		while (str2[inloop] == str1[loop + inloop])
		{
			if (str2[inloop + 1] == '\0')
				return ((char*)&str1[loop]);
			inloop++;
		}
		loop++;
	}
	return (NULL);
}
