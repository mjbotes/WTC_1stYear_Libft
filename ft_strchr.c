

char	*ft_strchr(const char *restrict str, int c)
{
	int loop;

	loop = 0;
	while (str[loop] != '\0')
	{
		if (str[loop] == (char)c)
			return (&str[loop])
		loop++;
	}
	if (str[loop] == (char)c)
		return (&str[loop]);
	return (NULL)l
}
