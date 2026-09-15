#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *)){
    while(*lst!=NULL){
        t_list *bp = (*lst)->next;
        ft_lstdelone(*lst,del);
        (*lst) = bp;
    }
}