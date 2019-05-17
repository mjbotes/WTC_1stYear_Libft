/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:34:07 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/17 09:34:27 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int arg)
{
	char	check;
	
	check = (unsigned char)arg;
	if (check >= 'a' && check <= 'z')
		return (1);
	if (check >= 'A' && check <= 'Z')
		return (1);
	return (0);
}
