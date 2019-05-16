

void	ft_strdel(char **as)
{
	free(*as);
	*as = NULL;
}
