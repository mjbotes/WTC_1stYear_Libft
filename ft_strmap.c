/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 07:21:52 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/21 09:31:17 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t			size;
	unsigned int	loop;
	char			*str;

	size = 0;
	loop = 0;
	size = ft_strlen(s);
    if (size > 0)
        if (!(str = ft_strnew(size)))
		return (NULL);
	while (loop < size)
	{
		str[loop] = f((char)s[loop]);
		loop++;
	}
	str[loop] = '\0';
	return (str);
}
