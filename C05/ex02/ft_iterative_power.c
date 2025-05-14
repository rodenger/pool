int	ft_iterative_power(int nb, int power)
{
	int i;
	int n;

	if (power < 0)
	{
		return (0);
	}
	i = 0;
	n = 1;
	while (i < power)
	{
		n *= nb;
		i++;
	}
	return (n);
}
