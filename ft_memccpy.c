

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	unsigned char	*ptr;
	size_t		loop;
	char		find;

	loop = 0;
	ptr = (unsigned char*)dest;
	find = (char)c;
	while(loop < len && (*src) != c)
	{
		*ptr = *src;
		loop++;
		ptr++;
		src++;
	}
	return (dest);
}
