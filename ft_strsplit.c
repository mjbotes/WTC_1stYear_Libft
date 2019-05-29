/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 10:00:58 by mbotes            #+#    #+#             */
/*   Updated: 2019/05/29 08:24:54 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_wordcounter(char const *s, char c)
{
	unsigned int	loop;
	unsigned int	sizey;
	unsigned int	sizex;

	loop = 0;
	sizey = 0;
	while (s[loop])
	{
		if (s[loop] == c || loop == 0)
		{
			while (s[loop + 1] == c && s[loop + 1])
				loop++;
			sizex = 0;
			while (s[loop + sizex + 1] != c && s[loop + sizex + 1])
				sizex++;
			loop = loop + sizex;
			if (sizex != 0)
				sizey++;
		}
		loop++;
	}
	return (sizey);
}

static char	**ft_wordsplit(char const *s, char c, char **arr)
{
	unsigned int	loop;
	unsigned int	sizey;
	unsigned int	sizex;

	sizey = 0;
	loop = 0;
	while (s[loop])
	{
		if (s[loop] == c || loop == 0)
		{
			while (s[loop] == c && s[loop])
				loop++;
			sizex = 0;
			while (s[loop + sizex] != c && s[loop + sizex])
				sizex++;
			if (sizex != 0)
				arr[sizey++] = ft_strsub(s, loop, sizex);
			loop = loop + sizex - 1;
		}
		loop++;
	}
	return (arr);
}

char		**ft_strsplit(char const *s, char c)
{
	char			**arr;
	unsigned int	loop;
	unsigned int	sizey;

	if (s == NULL)
		return (NULL);
	loop = 0;
	sizey = ft_wordcounter(s, c);
	if (!(arr = (char**)malloc(sizeof(char*) * (sizey + 1))))
		return (NULL);
	arr = ft_wordsplit(s, c, arr);
	arr[sizey] = NULL;
	return (arr);
}
