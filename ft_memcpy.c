#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n){
    const unsigned char * content = src;
    unsigned char * dContent = dest; 
    while(n && *content){
        *dContent = *content;
        content++;
        dContent++;
        n--;
    }
} 