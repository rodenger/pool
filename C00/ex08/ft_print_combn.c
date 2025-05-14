#include <unistd.h>

void put(char *nb, int n){
    int i = 0;
    while(i < n){
        write(1,&nb[i],1);
        i++;
    }
}

void ft_print_combn(int n){

    if(n < 1 || n > 9){
        return;
    }

    char min[n];
    char max[n];
    int i = 0;
    int pos = 0;
    int j = 1;

    while(i < n){
        min[i] = i + '0';
        max[i] = (10 - n) + i + '0';
        i++;
    }
    put(min,n);

    while(min[0] != max[0]){

        pos = n - 1;

        while(min[pos] == max[pos]){
            pos--;
        }

        min[pos]++;

        pos += 1;

        j = 1;
        while(pos < n){
            min[pos] = min[pos - j] + j;
            pos++;
            j++;
        }

        write(1,", ",2);
        put(min,n);
    }

}
