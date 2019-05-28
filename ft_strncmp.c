/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:44:54 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/28 07:33:13 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = n;
	if (i > ft_strlen(s1))
		i = ft_strlen(s1) + 1;
	if (i > ft_strlen(s2))
		i = ft_strlen(s2) + 1;
	return (ft_memcmp(s1, s2, i));
}
