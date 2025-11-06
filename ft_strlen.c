#include "libft.h"
#include <stdio.h>
#include <string.h>

int ft_strlen(const char *s){
	int size=0;
	while(size != 4){
		printf("%d\n", *s);
		size++;
		*s++;
	}
	return size;
}
