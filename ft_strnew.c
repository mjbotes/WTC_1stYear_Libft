

char	*ft_strnew(size_t size)
{
	char	*new;
	size_t	loop;

	loop = 0;
	if (!(new = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (loop <= size)
		new[loop++] = '\0';
	return (new);
}
