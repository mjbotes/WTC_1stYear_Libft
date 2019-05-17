/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:26:15 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/17 13:06:21 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_atoi(const char *restrict str)
{
	int	sign;
	int	res;
	int	loop;

	sign = 1;
	res = 0;
	loop = 0;
	if (str[0] == '-')
	{
		sign = -1;
		loop++;
	}
	while (ft_isdigit(str[loop]) == 0)
	{
		res = res * 10;
		res += str[loop++];
	}
	return (res);
}
