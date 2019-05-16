

char *strdup(const char *str)
{
	char	*new;
	char	*ptr;
	size_t	loop;
	size_t	size;

	loop = 0;
	while (*new++ != '\0')
		loop++;
	size = loop+1;
	loop = 0;
	if (!(new = malloc(sizeof(char)*size)))
		return (NULL);
	ptr = new;
	while (loop++ < size)
	{
		*ptr = *str;
		ptr++;
		str++;
	}
	return (new);
}
