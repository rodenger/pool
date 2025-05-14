#include <stdlib.h>

int	*ft_range(int min, int max)
{
	if (min >= max)
	{
		return (NULL);
	}

	int range;
	int *arr;

	range = max - min;
	arr = (int *)malloc(range * sizeof(int));

	range = 0;
	while (min < max)
	{
		arr[range] = min;
		range++;
		min++;
	}
	return (arr);
}
