#include <unistd.h>

int	ft_strlen(char *str) {
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return i;
}

int base_check(char *base)
{
	int i;
	int	j;

	if (ft_strlen(base) < 2)
	{
		return (0);
	}
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
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (!(base_check(base)))
	{
		return ;
	}
	int	len;
	long n;

	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	len = ft_strlen(base);
	if (n >= len)
	{
		ft_putnbr_base(n / len, base);
	}
	write(1, &base[n % len], 1);
}
