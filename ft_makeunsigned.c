/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makeunsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 09:44:58 by mbotes            #+#    #+#             */
/*   Updated: 2019/06/18 09:50:35 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

unsigned int		ft_makeunsigned(int num)
{
	int	*ptr;
	unsigned int *ret;

	ptr = &num;
	ret = (unsigned int*)ptr;
	return (*ret);
}
