

int	ft_atoi(const char *restrict str)
{
	int	sign;
	int	res;
	int	loop;

	sign = 1;
	res = 0;
	loop = 0;
	if (str[0] = '-')
	{
		sign = -1;
		loop++;
	}
	while (isDigit(str[loop] == 0)
	{
		res = res * 10;
		res += str[loop++];
	}
	return (res);
}
