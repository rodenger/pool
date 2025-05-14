#include <unistd.h>

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
