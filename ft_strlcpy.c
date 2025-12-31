#include <string.h>

size_t ft_strlcpy(char *destination, const char *source, size_t size){

    size_t i=0;
    size_t ret = strlen(source);

    if(size == 0) return ret;

    while(i<size - 1 && i < ret){
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0';

    return ret;
}