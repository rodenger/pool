int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	return nb * ft_recursive_power(nb, power - 1);
}

int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	while (i <= (nb / 2) || nb == 1)
	{
		if (ft_recursive_power(i, 2) == nb)
		{
			return (i);
		}
		if (ft_recursive_power(i, 2) > nb)
		{
			break;
		}

		i++;
	}
	return (0);
}
