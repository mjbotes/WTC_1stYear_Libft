/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 11:15:07 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/17 11:15:24 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(char const *restrict str1, char const *restrict str2)
{
	size_t		loop;
	unsigned char	*s1;
	unsigned char	*s2;
	int		diff;

	s1 = (unsigned char*)str1;
	s2 = (unsigned char*)str2;
	loop=0;
	diff = s1[loop] - s2[loop];
	while (diff == 0 && s1[loop] != '\0')
	{
		loop++;
		diff = s1[loop] - s2[loop]; 
	}
	return (diff);
}
