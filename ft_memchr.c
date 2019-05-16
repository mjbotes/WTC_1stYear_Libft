

void	*ft_memchr(const void *str, int c, size_t len)
{
	size_t		loop;
	unsigned char	*ptr;
	char		find;

	loop=0;
	find = (char)c;
	ptr = (unsigned char*)str;
	while (loop < len && (*ptr) == find)
	{
		loop++;
		ptr++;
	}
	if (*ptr == find)
		return (ptr);
	return (NULL);
}
