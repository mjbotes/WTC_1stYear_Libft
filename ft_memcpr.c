

int	ft_memcmp(const void *str1, const void *str2, size_t len)
{
	int	diff;
	size_t	loop;

	loop = 0;
	while(diff == 0 && loop<len)
	{
		diff = *str1 - *str2;
		str1++;
		str2++;
		loop++;
	}
	return (diff);
}
