/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 10:00:58 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/19 14:18:42 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_strsplity(char const *s, char c)
{
	unsigned int	loop;
	unsigned int	sizey;

	loop = 0;
	sizey = 0;
	while (s[loop] != '\0')
	{
		if (s[loop] == c)
		{
			while (s[loop + 1] == c)
				loop++;
			sizey++;
			while (s[loop + 1] != c && s[loop + 1] != '\0')
				loop++;
		}
		loop++;
	}
	return (sizey-1);
}

char	**ft_strsplit(char const *s, char c)
{
	char			**arr;
	unsigned int	loop;
	unsigned int	lop;
	unsigned int	sizey;
	unsigned int	sizex;

	loop = 0;
	sizey = 0;
	sizey = ft_strsplity(s,c);
	if (!(arr = (char**)malloc(sizeof(char*) * sizey)))
		return (NULL);
	loop = 0;
	sizey = 0;
	while (s[loop] != '\0')
	{
		if (s[loop] == c || loop == 0)
		{
			while (s[loop] == c)
				loop++;
			sizex = 0;
			lop = 0;
			while (s[loop + sizex] != c && s[loop + sizex] != '\0')
				sizex++;
			if (!(arr[sizey] = malloc((sizex+1) * sizeof(char))))
				return (NULL);
			while (lop < sizex && s[loop+lop+1] != '\0')
			{
				arr[sizey][lop] = s[loop+lop];
				lop++;
			}
			if (lop != 0)
				arr[sizey][lop] = '\0';
			sizey++;
			loop = loop + lop - 1;
		}
		loop++;
	}
	return (arr);
}

