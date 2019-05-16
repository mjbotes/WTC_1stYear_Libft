

int	ft_isalnum(int arg)
{
	char	check;
	
	check = (unsigned char)arg;
	if (check >= 'a' && check <= 'z')
		return (1);
	if (check >= 'A' && check <= 'Z')
		return (1);
        if (check >= '0' && check <= '9')
                return (1);
	return (0);
}
