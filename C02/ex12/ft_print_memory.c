#include <unistd.h>

void	memprint(unsigned long hex)
{
	if (hex < 1)
	{
		return ;
	}
	memprint(hex / 16);
	write(1, &("0123456789abcdef"[hex % 16]), 1);
}

void	ft_putstr_non_printable(unsigned char *str, int size, int j)
{
	int	i;

	i = 0;
	while (str[i] && i < 16 && j < size)
	{
		if (str[i] >= ' ' && str[i] <= '~')
		{
			write(1, &str[i], 1);
		}
		else
		{
			write(1, ".", 1);
		}
		i++;
	}
}

unsigned long	print(unsigned char *ptr, int j, int size)
{
	unsigned int	l;
	unsigned long	hex;

	l = 0;
	while (l < 16)
	{
		if (ptr[j] && j < size)
		{
			hex = ptr[j];
			write(1, &("0123456789abcdef"[hex / 16]), 1);
			write(1, &("0123456789abcdef"[hex % 16]), 1);
		}
		else
		{
			write(1, "  ", 2);
		}
		if ((l % 2) != 0)
		{
			write(1, " ", 1);
		}
		l++;
		j++;
	}
	return (j);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned long	j;
	unsigned long	hex;
	unsigned char	*ptr;

	j = 0;
	ptr = (unsigned char *)addr;
	while (j < size)
	{
		hex = (unsigned long)&ptr[j];
		memprint(hex);
		write(1, ": ", 2);
		j = print(ptr, j, size);
		ft_putstr_non_printable(&ptr[j - 16], size, j - 16);
		write(1, "\n", 1);
	}
	return (addr);
}
