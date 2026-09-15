#include <string.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strrchr(const char *s, int c){

    size_t s_len = ft_strlen(s);
    s+=s_len;
    

    if((char)c == '\0'){
        return (char *)s;
    }

    s--;
    while(s_len){
        if(*s==(char)c) return (char *) s;
        s--;
        s_len--;
    }
    
    return NULL;
}