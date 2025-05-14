int	ft_is_prime(int nb)
{
	if (nb == 2)
	{
		return (1);
	}
	if ((nb % 2) == 0 || nb < 2)
	{
		return (0);
	}

	int i;

	i = 2;
	while (i <= (nb /2))
	{
		if ((i % 2) == 0)
		{
			i++;
			continue ;
		}
		if ((nb % i) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
