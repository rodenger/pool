void ft_rev_int_tab(int *tab, int size){
	int i = 0;
	int tmp = 0;
	size -= 1;

	while(i <= size){
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
		size--;
		i++;
	}
}
