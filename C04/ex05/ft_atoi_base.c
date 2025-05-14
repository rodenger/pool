#include <stdlib.h>

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
