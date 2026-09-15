#include <stdlib.h>
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)){
    size_t i = 0;

    char *ret = malloc(ft_strlen(s) + 1);
    if(!ret) return NULL;
    
    ret[ft_strlen(s)] = '\0';

    while(s[i]){
        ret[i] = f(i, s[i]);
        i++;
    }

    return ret;
}