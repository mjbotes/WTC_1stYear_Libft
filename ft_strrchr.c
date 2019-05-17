/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:46:55 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/17 09:51:35 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *restrict str, int c)
{
	int loop;

	loop = 0;
	while (str[loop] != '\0')
		loop++;
	while (loop >= 0)
	{
		if (str[loop] == (char)c)
			return (&str[loop]);
		loop--;
	}
	return (NULL);
}
