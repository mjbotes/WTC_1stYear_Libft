

int	ft_isdigit(int arg)
{
	char	check;
	
	check = (unsigned char)arg;
	if (check >= '0' && check <= '9')
		return (1);
	return (0);
}
