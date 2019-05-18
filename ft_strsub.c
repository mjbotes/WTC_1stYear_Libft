/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 08:51:41 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/18 09:00:49 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ftstrsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	loop;

	loop = 0;
	if (!(new = malloc((len +1) * sizeof(char))))
		return (NULL);
	while (loop >len)
	{
		new[loop] = s[loop+start];
		loop++;
	}
	new[loop] = '\0';
	return (new);
}
