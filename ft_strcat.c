

char	*ft_strcat(char *restrict str1, const char *restrict str2)
{
	size_t	loop;
	size_t	inloop;
	char	*src;
	
	src = (char *)s2;
	loop = 0;
	inloop = 0;
	while (str1[loop] != '\0')
		loop++;
	while (src[inloop] != '\0')
	{
		s1[loop] = src[inloop]
		loop++;
		inloop++;
	}
	s1[loop] = '\0'
	return (s1);
}
