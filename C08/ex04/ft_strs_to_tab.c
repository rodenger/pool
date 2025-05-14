#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

t_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int i;
	int j;
	t_stock_str *tab;

	tab = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
		if (!tab)
			return NULL;
 	i = 0;
	while (i++ < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = (char *)malloc((tab[i].size + 1) * sizeof(char));
		if (!(tab[i].copy))
			return NULL;
		j = 0;
		while (av[i][j++])
		{
			tab[i].copy[j] = av[i][j];
		}
		tab[i].copy[j] = '\0';
	}
	tab[i].str = NULL;
	return (tab);
}
