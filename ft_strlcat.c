

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	loop;
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	loop = 0;
	if (len < len_dst +1)
		return (len_src + len);
	while (loop < len_src)
		dest[len_src + loop] = src[loop++];
	dest[len_src + loop] = '\0';
	return (len_src + len_dst);
}
