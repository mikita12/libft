#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new){
    t_list *curr_last = ft_lstlast(*lst);

    if(*lst == NULL){
        *lst = new;
        return;
    }

    curr_last->next = new;
}