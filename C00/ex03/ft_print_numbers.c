#include <unistd.h>

void ft_print_numbers(void){
	int d = 48;
	while(d <= 57){
		write(1,&d,1);
		d++;
	}
}
