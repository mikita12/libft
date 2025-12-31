#include <string.h>

char *ft_strrchar(const char *s, int c){

    const char *cp = NULL;

    while(*s != '\0'){
        if(*s==(char)c) cp = s;
        s++;
    }

    if((char)c=='\0') return (char *)s;
    if(cp != NULL) return (char *)cp;
    else return NULL;
}

/*char inc = 0;
    char dec = strlen(s);

    while(*s != '\0'){
        if(*s==(char)c) inc++;
        s++;
    }

    if((char)c=='\0') return (char *)s;
    if(inc==0) return NULL;

    while(*(s - dec) != '\0'){
        if(*(s - dec) == (char)c) inc--;
        if(inc == 0) return (char *)s - dec;
        s++;
    }

    return (char *)s - dec;*/