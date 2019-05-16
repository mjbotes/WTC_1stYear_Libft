

char	*ft_strcpy(char *restrict dst, const char *restrict src)
{
	size_t	loop;

	loop = 0;
	while(src[loop] != '\0')
	{
		dst[i] = src[i];
		loop++;
	}
	dst[loop] = '\0';
	return (dst);
}
