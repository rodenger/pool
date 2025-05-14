int	ft_strlen(char *str)
{
	int	i = 0;
	while(str[i]){
		i++;
	}
	return i;
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;

	n = ft_strlen(dest);
	i = 0;
	while (src[i] && n < size - 1)
	{
		dest[n] = src[i];
		i++;
		n++;
	}
	dest[n] = 0;
	return ft_strlen(src) + n;
}
