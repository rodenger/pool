int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;

	while (s1[i] && s2[i] && s1[i] == s2[i] && i < (n - 1))
	{
		i++;
	}

	if (n > 0)
	{
		return (s1[i] - s2[i]);
	}
	else
	{
		return (0);
	}
}
