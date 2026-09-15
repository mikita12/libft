#include "libft.h"

int ft_lstsize(t_list *lst){

    int size = 0;

    t_list *cp = lst;

    while(cp != NULL){
        cp = cp->next;
        size++;
    }

    return size;
}