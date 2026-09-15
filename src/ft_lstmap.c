#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)){
    if(lst == NULL) return NULL;
    
    void *content_var = f(lst->content);
    t_list *new = ft_lstnew(content_var);
    if(new==NULL) {
        del(content_var);
        return NULL;
    }
    t_list *ret = new;

    while(lst->next!=NULL){
        
        lst = lst->next;
        content_var=f(lst->content);
        new->next = ft_lstnew(content_var);
        if(new->next==NULL){
            del(content_var);
            while(ret!=NULL){
                t_list *bp = ret->next;
                ft_lstdelone(ret,del);
                ret = bp;
            }
            return NULL;
        } 
            
        new = new->next;
    }

    return ret;
}