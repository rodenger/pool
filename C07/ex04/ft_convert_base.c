#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int base_check(char *base)
{
	int i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
	    return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
		{
			return (0);
		}
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (i);
}

int pos(char c, char *base)
{
	int	i;

	i = 0;
	while(base[i])
	{
		if (c == base[i])
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{

    int len;
    int i;
    int sign;
    long num;

    len = base_check(base);
    if (!len)
        return (0);
    num = 0;
    i = 0;
    sign = 1;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13) || str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
        {
            sign *= -1;
        }
        i++;
    }
    while (str[i] && (pos(str[i], base) >= 0))
    {
   		num = num * len + pos(str[i], base);
   		i++;
    }
    return num * sign;
}

void dec_to_base(int num, int len, int *i, char *arr, char *base)
{
	if (num >= len)
	{
		dec_to_base(num / len, len, i, arr, base);
	}
	arr[(*i)++] = base[num % len];
	arr[(*i)] = '\0';
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    int i;
    long n;
    int len;

    n = ft_atoi_base(nbr, base_from);
    nbr = (char *)malloc(50 * sizeof(char));
    len = base_check(base_from);
    if (!len)
        return NULL;
    len = base_check(base_to);
    if (!len)
        return NULL;
    i = 0;
    if (n < 0)
    {
        n = -n;
        nbr[0] = '-';
        i = 1;
    }

    dec_to_base(n, len, &i, nbr, base_to);
    return nbr;
}
