#include <unistd.h>

int main(int ac, char **av)
{
	int i;

	i = 0;
	while (av[0][i])
	{
		write(1,&av[0][i],1);
		i++;
	}
	write(1,"\n",1);
	i = ac;
	return (0);
}
