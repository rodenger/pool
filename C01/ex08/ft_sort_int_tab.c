void ft_sort_int_tab(int *tab, int size){
	int i = 0;
	int tmp = 0;

	while(size > 1){
		i = 0;
		while((i + 1) < size){
			if(tab[i] > tab[i + 1]){
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		size --;
	}
}
