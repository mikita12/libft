#include "libft.h"

int ft_tolower(int c){
	if(ft_isalpha(c)!=0) return c<91 ? c+32 : c;
		else return c;
}
