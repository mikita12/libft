#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <string.h>

int main(){
	
	char slowo [] = "abcdabbbabcc";
	char *dest = malloc(strlen(slowo)+1);
	

	printf("char: %ld\n",ft_strlcpy(dest,slowo,strlen(slowo)+1));
	printf("char: %s\n",dest);

	return 0;
}
