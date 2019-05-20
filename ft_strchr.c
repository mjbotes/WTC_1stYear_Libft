/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:42:32 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/20 16:41:52 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *restrict str, int c)
{
	int		loop;

	loop = 0;
	while (str[loop] != '\0')
	{
		if (str[loop] == (char)c)
			return ((char*)&str[loop]);
		loop++;
	}	
	if (str[loop] == (char)c)
		return ((char*)&str[loop]);
	return (NULL);;
}
