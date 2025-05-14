#include <unistd.h>

void ft_putstr(char *str) {
	int i = 0;

	while (str[i]) {
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void sort_strs(char **av, int ac)
{
	int i;
	char *tmp;

	while (ac > 1)
	{
		i = 1;
		while (i < ac - 1)
		{
			if (ft_strcmp(av[i], av[i + 1]) > 0)
			{
				tmp = av[i];
				av[i] = av[i + 1];
				av[i + 1] = tmp;
			}
			i++;
		}
		ac--;
	}
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		int i;

		sort_strs(av, ac);
		i = 1;
		while (i < ac)
		{
			ft_putstr(av[i]);
			write(1,"\n",1);
			i++;
		}
	}
	return (0);
}
