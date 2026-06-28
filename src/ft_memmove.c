#include "libft.h"
#include <stdlib.h>

void *ft_memmove(void *dest, const void *src, size_t n){

    const unsigned char *content = src;
    unsigned char *dContent = dest;
    unsigned char *buf = malloc(sizeof(char)*n);
    unsigned char *buf_ptr = buf;
    int i=0;
    while(i<n){
        *(buf + i) = *(content+i);
        i++;
    }

    while(n--){
        *dContent = *buf_ptr;
        buf_ptr++;
        dContent++;
    }

    return dest; 
}