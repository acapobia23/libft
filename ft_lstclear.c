#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *ptr;

    while (*lst)
    {
        ptr = *lst;
        *lst = *lst->next;
        (*del)(ptr->content);
        free(ptr);
    }
}