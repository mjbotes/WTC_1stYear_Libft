/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 10:07:34 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/18 15:12:32 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *str)
{
	char	*new;
	char	*ptr;
	size_t	loop;
	size_t	size;

	loop = 0;
	while (str[loop] != '\0')
		loop++;
	size = loop+1;
	loop = 0;
	if (!(new = malloc(sizeof(char)*size)))
		return (NULL);
	ptr = new;
	while (loop < size)
	{
		ptr[loop] = str[loop];
		loop++;
	}
	new[loop] = '\0';
	return (new);
}
