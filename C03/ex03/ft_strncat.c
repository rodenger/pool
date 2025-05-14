int	ft_strlen(char *str)
{
	int	i = 0;
	while(str[i]){
		i++;
	}
	return i;
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int n;

	n = ft_strlen(dest);
	i = 0;
	while (src[i] && i < nb)
	{
		dest[n] = src[i];
		i++;
		n++;
	}
	dest[n] = 0;
	return (dest);
}
