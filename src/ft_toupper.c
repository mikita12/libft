#include "libft.h"

int ft_toupper(int c){

	if(ft_isalpha(c)!=0) return c<123 ? c-32 : c;
		else return c;
}
