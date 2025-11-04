#include <stdio.h>
#include "libft.h"

int main(){
	
	int c='#';
	if(ft_isalpha(c) != 0) printf("%s", "Podales znak z alfabetu \n");
		else printf("%s", "Podanego znaku nie ma w alfabecie \n");

	return 0;
	
}
