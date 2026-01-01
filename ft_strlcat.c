#include <string.h>

size_t ft_strlcat(char *dst, const char *src, size_t dstsize){

    size_t dsl = strlen(dst);
    size_t ret = dsl + strlen(src);
    if(dstsize <= dsl) return ret;
    
    size_t i = 0;
    while(i<dstsize - dsl - 1 && src[i] != '\0'){
        dst[i + dsl] = src[i];
        i++;
    }

    dst[i + dsl] = '\0';

    return ret;
}