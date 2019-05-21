/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 08:51:41 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/21 09:01:26 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	loop;

	loop = -1;
	if (!(new = ft_strnew(len + 1)))
		return (NULL);
	while (++loop < len)
		new[loop] = s[loop + start];
	return (new);
}
