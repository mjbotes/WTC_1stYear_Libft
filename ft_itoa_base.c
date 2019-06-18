/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 09:37:46 by mbotes            #+#    #+#             */
/*   Updated: 2019/06/18 10:53:06 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa_base(long long n, int base)
{
    static  char rep[] = "0123456789abcdef";
    static  char *buf;
    unsigned long long     num;
	int		loop;
	unsigned long long ret;

    num = (unsigned long)n;
	loop = 0;
	while (num != 0)
	{
		num /= base;
		loop++;
	}     
	if ( loop == 0)
		loop = 1;
	buf = ft_strnew(loop);
	ret = (unsigned long)n;
    while (loop > 0 )
    {
        buf[--loop] = rep[ret % base];
        ret /= base;
    }
    return (buf);
}