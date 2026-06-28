#include "libft.h"
#include <stdio.h>
#include <string.h>

int ft_strlen(const char *s){
	int size=0;
	while(*s){
		size++;
		s++;
	}	
	return size;
}
