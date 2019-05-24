/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 10:07:34 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/21 14:36:36 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*new;

	if (!(new = ft_strnew(ft_strlen(str))))
		return (NULL);
	ft_strcpy(new, str);
	return (new);
}

char    *ft_strndup(const char *str, size_t len)
{
    char    *new;
    
    if (!(new = ft_strnew(len)))
        return (NULL);
    ft_strncpy(new, str, len + 1);
    new[len] = '\0';
    return (new);
}
