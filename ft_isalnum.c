/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:33:40 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/17 09:33:57 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int arg)
{
	char	check;
	
	check = (unsigned char)arg;
	if (check >= 'a' && check <= 'z')
		return (1);
	if (check >= 'A' && check <= 'Z')
		return (1);
        if (check >= '0' && check <= '9')
                return (1);
	return (0);
}
