#include <stdlib.h>
#include <stdio.h>

int ft_atoi(const char *nptr){

    int sign = 1;
    int digit = 0;

    while(*nptr){
        if(*nptr >= '0' && *nptr <= '9') break;
        if(*nptr == '+'){
            if(*(nptr+1) >= '0' && *(nptr+1) <= '9'){
                nptr++;
                break;
            } else return digit * sign;
        }
        if(*nptr == '-'){
            if(*(nptr+1) >= '0' && *(nptr+1) <= '9'){
                sign = sign-2;
                nptr++;
                break;
            } else return digit * sign;
        }
        if(*nptr!=' ' && *nptr!='\t' && *nptr!='\n' && *nptr!='\v' && *nptr!='\f' && *nptr!='\r') return digit * sign;
        nptr++;
    }

    while(*nptr >= '0' && *nptr <= '9'){
        digit = digit*10 +(*nptr - 48);
        nptr++;
    }

    return digit * sign; 

}