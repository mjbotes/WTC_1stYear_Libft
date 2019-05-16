

char	*ft_strstr(const char *str1, const char *str2, size_t len)
{
	char	*ptr1;
	size_t	loop;
	size_t	inloop;

	loop = 0;
	while (str1[loop] != '\0 && loop < len)
	{
		inloop = 0;
		while (str2[inloop] == str1[loop + inloop] && loop + inloop < len)
		{
			if (str2[inloop + 1] == '\0')
				return (str1[loop]);
			inloop++;
		}
		loop++;
	}
	return (NULL);
}
