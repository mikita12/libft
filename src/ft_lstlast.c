#include "libft.h"

t_list *ft_lstlast(t_list *lst){
    t_list *cp = lst;

    if(lst == NULL) return NULL;

    while(cp->next != NULL){
        cp = cp->next;
    }

    return cp;
}