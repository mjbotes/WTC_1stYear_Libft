/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 11:37:24 by mbotes            #+#    #+#             */
/*   Updated: 2019/06/18 13:17:32 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_dtoa(long double n)
{
	long long	num;
	long double	dec;
	char 		*str;
	char		*tmp;
	char		*tmp2;
	int			loop;
	int			len;

	loop = 0;
	dec = n;
	num = (long long)dec;
	dec -= num;
	if (n < 0)
		dec *= -1;
	str = ft_itoa(num);
	len = ft_strlen(str) + 1;
	tmp = ft_strjoin(str, ".");
	ft_strdel(&str);
	while ( loop < 6 && dec != 0)
	{
		dec *= 10;
		num = (long)dec;
		dec = dec - num;
		if (loop == 5)
		{
			dec *= 10; 
			if (dec >= 5)
				num++;
			if (num == 10)
				num = 0;
			while (tmp[--len] == '9')
			{
				tmp[len] = '0';
				if (tmp[len - 1] != '9')
					tmp[len - 1] += 1;
			}
		}
		str = ft_itoa(num);
		tmp2 = ft_strjoin(tmp, str);
		len++;
		ft_strdel(&str);
		ft_strdel(&tmp);
		tmp = ft_strdupdel(&tmp2);
		loop++;
	}
	return (tmp);
}
