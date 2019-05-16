

void	*ft_memset(void *pr, int value, size_t len)
{
	unsigned char	*ptr;
	size_t		loop;

	ptr = (unsigned char*)pr;
	loop=0;
	while (loop++ < len)
	{
		*ptr = value;
		ptr++;
	}
	return (pr);
}
