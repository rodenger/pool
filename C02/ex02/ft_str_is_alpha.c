int ft_str_is_alpha(char *str){
	int i = 0;
	while(str[i]){
		if(!((str[i] <= 'z' && str[i] >= 'a') || (str[i] <= 'Z' && str[i] >= 'A'))){
			return 0;
		}
		i++;
	}
	return 1;
}
