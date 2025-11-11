#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(){
	
	size_t n = 21473;
	char * kurwa = malloc(sizeof(char)*5);
	int c = 97;
	void *s = kurwa;
	char * str = "helo";
	printf("%s\n",kurwa);
	ft_memcpy(s,str,n);
	printf("%s\n",kurwa);
	printf("%lu\n",sizeof(*kurwa));
	return 0;
	
}
