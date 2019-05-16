

int ft_strncmp(char const *restrict str1, char const *restrict s2, size_t len)
{
	size_t		loop;
	unsigned char	s1;
	unsigned char	s2;
	int		diff;

	s1 = (unsigned char*)str1;
	s2 = (unsigned char*)str2;
	loop = 0;
	diff = s1[loop] - s2[loop];
	while(diff == 0 && loop < len && s1[loop] != '\0')
	{
		loop++;
		diff = s1[loop] - s2[loop];
	}
	return (diff);
}
