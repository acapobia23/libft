#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    t_list  *ptr;

    ptr = lst;

    while (ptr)
    {
        (*del)(ptr->content);
        ptr = ptr->next;
    }
}
