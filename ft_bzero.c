

void	ft_bzero(void *ptr, size_t len)
{
	size_t	loop;

	loop=0;
	while(loop++ < len)
	{
		*ptr = 0;
		ptr++;
	}
}
