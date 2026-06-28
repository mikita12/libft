#include "libft.h"
#include <stdio.h>

void *ft_memset(void *s, int c, size_t n){
    unsigned char* str = s;
    while(n){
        *str = c;
        str++;
        n--;
    }
}