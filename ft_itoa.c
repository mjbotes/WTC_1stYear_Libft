/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 10:48:12 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/18 11:04:57 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	while (num > 10)
	{
		num = num / 10;
		loop++;
	}
	if (!(new = malloc(sizeof(char) * loop)))
		return (NULL);
	num = n;
	loop = 0;
	if (n < 0)
	{
		new[loop] = '-';
		loop++;
	}
	while (num >= 1)
	{
		rem = num % 10;
		num = num / 10;
		new[loop] = rem + 48;
		loop++;
	}
	new[loop+1] = '\0';
	return (new);	
}
