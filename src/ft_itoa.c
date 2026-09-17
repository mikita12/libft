#include <stdlib.h>
#include "libft.h"

static size_t count_weight(size_t n){

    size_t i = 0;
    if(n==0){
        i++;
        return i;
    } 
        
    while(n>0){
        n/=10;
        i++;
    }
    return i;

} 

char *ft_itoa(int n){
    size_t n_cp = n;
    size_t offset = 1;

    if(n<0){
        offset = 2;
        n_cp*=-1;
    }
    
    size_t weight = count_weight(n_cp);

    char *str = malloc(sizeof(char)*(weight + offset));
    str[weight] = '\0';
    
    size_t i = weight;
    if(offset == 2){
        str[weight + 1] = '\0';
        str[0] = '-';
        i = weight + 1;
    }
    while(i>0 && str[i-1] != '-'){
        i--;
        str[i] = (char)(n_cp % 10 + 48);
        n_cp=n_cp/10;
    }

    return str;
}