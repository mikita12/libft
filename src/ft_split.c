#include <stdlib.h>
#include "libft.h"

//brzegowe: pusty string, brak char c w s, 


static size_t count_words(char const *s, char c){
    size_t count = 0;
    size_t i = 0;
    while(s[i] != '\0'){
        if(s[i] != c && (i == 0 || s[i-1] == c)) 
            count++;
        i++;
    }

    return count;
}
//znajdz adres slowa -> odejmij od adresu nastepnego delimetera -> zwroc adres slowa

static void free_split(char **ret){
    size_t i = 0;
    while(ret[i]!=NULL){
        free(ret[i]);
        i++;
    }

    return;
}

char **ft_split(char const *s, char c){

    size_t words = count_words(s,c);

    char **ret = malloc(sizeof(char *) * (words + 1));
    ret[words] = NULL;

    size_t i = 0,j=0;

    while(s[j]){
        
        if(s[j] == c){
            j++;
            continue;
        }

        size_t start = j;
        while(s[j] != c && s[j])
            j++;

        ret[i] = ft_substr(s, start, j - start);
        if(!ret[i]){
            ft_bzero(ret,sizeof(char *) * (words + 1));
            free_split(ret);
            return NULL;
        }
        i++;
    }

    return ret;
}