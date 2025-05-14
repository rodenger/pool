#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	copyto(char *arr, int size, char **strs, char *sep)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			arr[k] = strs[i][j];
			j++;
			k++;
		}

		l = 0;
		while (sep[l] && i < (size - 1))
		{
			arr[k] = sep[l];
			l++;
			k++;
		}
		i++;
	}
	arr[k] = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *arr;
	int i;
	int count;

	if (size == 0)
	{
		arr = (char *)malloc(sizeof(char));
			arr[0] = '\0';
		return (arr);
	}

	count = 1;
	i = 0;
	while (i < size)
	{
		count += ft_strlen(strs[i]);
		i++;
	}
	count += ft_strlen(sep) * (size - 1);
	arr = (char *)malloc(count * sizeof(char));

	copyto(arr, size, strs, sep);

	return (arr);
}
