/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 10:48:12 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/19 09:26:03 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	unsigned int	loop;
	char			*new;
	int				num;
	int				rem;

	loop = 0;
	num = n;
	if (n < 0)
	{
		loop++;
		num = num * -1;
	}
	while (num >= 10)
	{
		num = num / 10;
		loop++;
	}
	loop++;
	if (!(new = malloc(sizeof(char) * (loop+1))))
		return (NULL);
	num = n;
	new[loop] = '\0';
	loop--;
	if (num < 0)
	{
		new[0] = '-';
		num = num * -1;
	}
	while (num > 10)
	{
		rem = num % 10;
		num = num / 10;
		new[loop] = rem + '0';
		loop--;
	}
	new[loop] = num + '0';
	return (new);	
}
