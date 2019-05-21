/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 09:01:36 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/21 09:59:28 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t			len1;
	size_t			len2;
	char			*new;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!(new = ft_strnew(len1 + len2 + 1)))
		return (NULL);
	ft_strcat(new, s1);
	ft_strcat(new, s2);
	return (new);
}
