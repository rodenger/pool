#include <unistd.h>

#include <unistd.h>

#include <unistd.h>

void ft_putstr(char *str){
	int i = 0;
	while(str[i]){
		write(1,&str[i],1);
		i++;
	}
}

void ft_putnbr(int nb){
	int i = 0;
	int arr[10];

	if(nb == -2147483648){
		write(1,"-2147483648",11);
		return;
	}

	if(nb == 0){
		write(1,"0",1);
		return;
	}

	if(nb < 0){
		write(1,"-",1);
		nb *= -1;
	}

	while(nb > 0){
		arr[i++] = nb % 10 + '0';
		nb /= 10;
	}

	while(--i >= 0){
	    write(1,&arr[i],1);
	}
}

void ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str)
	{
		ft_putnbr(par[i].size);
		write(1, "\n" ,1);
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
