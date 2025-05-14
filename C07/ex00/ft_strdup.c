#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
	char *dest;

	i = 0;
	while (src[i])
	{
		i++;
	}

	dest = (char *)malloc(i * sizeof(char));

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = 0;

	return (dest);
}
