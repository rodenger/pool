#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	c_strs(char *str, char *charset)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset) == 1)
			i++;
		if (str[i])
			c++;
		while (str[i] && is_sep(str[i], charset) == 0)
			i++;
	}
	return (c);
}

int	copy(char **split, char *str, char *charset, int i)
{
	int	len;

	*split = NULL;
	len = 0;
	while (str[i + len] && is_sep(str[i + len], charset) == 0)
	{
		len++;
	}
	if (len > 0)
	{
		*split = (char *)malloc((len + 1) * sizeof(char));
		len = 0;
		while (str[i] && is_sep(str[i], charset) == 0)
		{
			(*split)[len] = str[i];
			len++;
			i++;
		}
		(*split)[len] = '\0';
	}
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	int		c;
	int		i;
	char	**split;

	c = c_strs(str, charset) + 1;
	split = (char **)malloc(c * sizeof(char *));
	i = 0;
	c = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset) == 1)
			i++;
		i = copy(&split[c], str, charset, i);
		if (split[c] != NULL)
			c++;
	}
	split[c] = NULL;
	return (split);
}
