/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 07:31:48 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/18 08:21:46 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char	*))
{
	unsigned int	loop;

	loop = 0;
	while (s[loop] != '\0')
	{
		f(loop,&s[loop]);
		loop++;
	}
}
