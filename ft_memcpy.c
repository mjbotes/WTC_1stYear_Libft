

void *ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char	*ptr;
	size_t		loop;

	ptr = (unsigned char*)dest;
	loop = 0;
	while (loop < len)
	{
		*ptr = *src;
		loop++;
		ptr++;
		src++;
	}
	return (dest);
}
