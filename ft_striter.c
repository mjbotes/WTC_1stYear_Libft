/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 07:13:57 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/29 09:20:25 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char	*))
{
	unsigned int	loop;

	loop = 0;
	if (s != NULL && f != NULL)
		while (s[loop])
			f(&s[loop++]);
}
