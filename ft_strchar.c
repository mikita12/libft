#include <string.h>
#include <stdlib.h>

char *ft_strchar(const char *s, int c){

    while(*s != '\0'){
        if(*s==(char)c) return (char *) s;
        s++;
    }
    if((char)c == '\0'){
        return (char *)s;
    }

    return NULL;
}