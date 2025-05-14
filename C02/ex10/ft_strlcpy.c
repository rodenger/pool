unsigned int ft_strlcpy(char *dest, char *src, unsigned int size){

	unsigned int i = 0;
	unsigned int j = 0;

	while(src[j]){
		j++;
	}

	while(src[i] && i < (size - 1)){
		dest[i] = src[i];
		i++;
	}

	if (size > 0)
		dest[i] = '\0';

	return j;
}
