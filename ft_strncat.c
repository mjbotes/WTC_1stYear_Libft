

char	*ft_strncat(char *restrict str1, const char *restrict str2, size_t len)
{
	char	src;
	size_t	loop;
	size_t	inloop;

	src = (char *)str2;
	loop = 0;
	inloop = 0;
	while(str1[loop] != '\0')
		loop++;
	while(src[inloop] != '\0' && inloop < len)
	{
		str1[loop] = src[inloop]
		inloop++;
		loop++;
	}
	str1[loop] = '\0';
	return (str1);
}
