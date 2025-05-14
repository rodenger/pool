#include <unistd.h>

void ft_putstr(char *str) {
	int i = 0;

	while (str[i]) {
		write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	while (ac > 1)
	{
		ft_putstr(av[ac - 1]);
		write(1,"\n",1);
		ac--;
	}
	return (0);
}
