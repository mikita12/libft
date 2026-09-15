#include <string.h>

#include "libft.h"

void* ft_memchr( const void* ptr, int ch, size_t count ){

    size_t i = 0;
    const unsigned char* cp = (const unsigned char *)ptr;
    while(i<count){
        if(cp[i] == (unsigned char)ch) return (void *)cp +i;
        i++;
    }

    return NULL;

}