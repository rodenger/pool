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
	int i;

	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		write(1,"\n",1);
		i++;
	}
	return (0);
}
