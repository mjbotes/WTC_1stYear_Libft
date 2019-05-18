/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 07:30:23 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/18 07:31:28 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			size;
	unsigned int	loop;
	char			*str;

	size = 0;
	loop = 0;
	while (s[size] != '\0')
		size++;
	size++;
	str = malloc(sizeof(char) * size);
	while (loop < size)
		str[loop]=f(loop, (char)s[loop++]);
	str[loop] = '\0';
}
