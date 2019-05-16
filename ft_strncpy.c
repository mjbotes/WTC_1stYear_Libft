

char	*ft_strncpy(char *restrict dst, const char *restrict src, size_t len)
{
	size_t	loop;

	loop = 0;
	while(i < len && src[loop] != '\0')
	{
		dst[i] = src[i]
		loop++;
	}
	return (dst);
}
