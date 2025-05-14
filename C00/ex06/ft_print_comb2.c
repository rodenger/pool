#include <unistd.h>


void ft_print_comb2(void){
    int i = 0;
    int j = 0;
    int k = 0;

    while(i <= 98){
        j = i + 1;
        while(j <= 99){

            k = i / 10 + '0';
            write(1,&k,1);
            k = i % 10 + '0';
            write(1,&k,1);

            write(1," ",1);

            k = j / 10 + '0';
            write(1,&k,1);
            k = j % 10 + '0';
            write(1,&k,1);

            if(!(i == 98 && j == 99)){
                write(1,", ",2);
            }
            j++;
        }
        i++;
    }
}
