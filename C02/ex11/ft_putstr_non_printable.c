#include <unistd.h>

void ft_putstr_non_printable(char *str){
	int i = 0;
	int hex = 0;

	while(str[i]){

		if(str[i] >= ' ' && str[i] <= '~'){
			write(1,&str[i],1);
		} else{
		    write(1,"\\",1);
			hex = str[i];
			write(1,&("0123456789abcdef"[hex / 16]),1);
			write(1,&("0123456789abcdef"[hex % 16]),1);
		}
		i++;
	}
}
