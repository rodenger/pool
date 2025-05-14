#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = NULL;
		return (-1);
	}

	int i;
	int r;

	r = max - min;
	*range = (int *)malloc(r * sizeof(int));

	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (r);
} //VSP
