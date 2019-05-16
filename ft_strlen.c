

int	ft_strlen(char *restrict str)
{
	size_t	loop;

	loop=0;	
	while (str[loop] != '\0')
		loop++;
	return (loop);
}
