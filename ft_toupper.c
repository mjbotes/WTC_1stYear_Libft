/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:48:50 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/18 08:47:48 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int arg)
{
	unsigned char	c;

	if (ft_isascii(arg) == 0)
		return (-1);
	c = (unsigned char)arg;
	if (c >= 'a' && c <= 'z')
		arg -= 32;
	return (arg);
}
