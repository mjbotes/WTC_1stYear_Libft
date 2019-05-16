

int	ft_toupper(int arg)
{
	unsigned char	c;

	if (ft_isascii(c) == 0)
		return (-1);
	c = (unsigned char)arg;
	if (c >= 'A' && c <= 'Z')
		arg += 32;
	return (arg);
}
