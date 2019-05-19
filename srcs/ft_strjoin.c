/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 09:01:36 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/19 09:51:59 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t			len1;
	size_t			len2;
	unsigned int	loop;
	char			*new;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	loop = 0;
	if (!(new = malloc(sizeof(char) * (len1 + len2 + 1))))
		return (NULL);
	while (loop < len1)
	{
		new[loop] = s1[loop];
		loop++;
	}
	loop = 0;
	while (loop < len2)
	{
		new[len1 + loop] = s2[loop];
		loop++;
	}
	new[len1 + loop] = '\0';
	return (new);
}	
