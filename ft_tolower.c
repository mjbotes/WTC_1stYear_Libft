/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:48:11 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/18 08:48:09 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolowe(int arg)
{
	unsigned char	c;

	if (ft_isascii(arg) == 0)
		return (-1);
	c = (unsigned char)arg;
	if (c >= 'A' && c <= 'Z')
		arg += 32;
	return (arg);
}
