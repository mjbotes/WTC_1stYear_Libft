/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 10:00:58 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/18 10:46:49 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**strsplit(char const *s, char c)
{
	char			**arr;
	unsigned int	loop;
	unsigned int	lop;
	unsigned int	sizey;
	unsigned int	sizex;

	loop = 0;
	sizey = 0;
	arr = NULL;
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
	if (!(*arr = malloc(sizeof(char*) * sizey)))
		return (NULL);
	loop = 0;
	sizey = 0;
	while (s[loop] != '\0')
	{
		if (s[loop] == c)
		{
			while (s[loop] == c)
				loop++;
			sizex = 0;
			lop = 0;
			while (s[loop + sizex] != c && s[loop + sizex] != '\0')
				sizex++;
			if (!(arr[sizey] = malloc((sizex+1) * sizeof(char))))
				return (NULL);
			while (lop < sizex)
			{
				arr[sizey][lop] = s[loop+lop];
				lop++;
			}
			arr[sizey][lop] = '\0';
			sizey++;
			loop = loop + lop - 1;
		}
		loop++;
	}
	return (arr);
}
