int	ft_iterative_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}

	int n;

	n = 1;
	while (nb > 1)
	{
		n *= nb;

		nb--;
	}
	return (n);
}
