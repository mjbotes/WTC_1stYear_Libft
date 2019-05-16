

int	ft_isascii(int arg)
{	
	if (arg >= '0' && arg <= '126')
		return (1);
	return (0);
}
