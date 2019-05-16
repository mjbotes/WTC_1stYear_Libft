

char	*ft_strstr(const char *str1, const char *str2)
{
	char	*ptr1;
	int	loop;
	int	inloop;

	loop = 0;
	while (str1[loop] != '\0)
	{
		inloop = 0;
		while (str2[inloop] == str1[loop + inloop])
		{
			if (str2[inloop + 1] == '\0')
				return (str1[loop]);
		}
	}
	return (NULL);
}
