/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 10:07:34 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/20 14:55:34 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *str)
{
	char	*new;
	size_t	size;

	size = ft_strlen(str);
	new = ft_strnew(size);
	ft_strcpy(new,str);
	return (new);
}
