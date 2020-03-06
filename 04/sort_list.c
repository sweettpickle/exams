#include "ft_list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *cur;
    t_list *tmp;

    cur = lst;
    while (cur->next)
    {
        if ( (*cmp)(cur->data, cur->next->data) == 0 )
        {
            tmp = cur->next;
            cur->next = cur->next->next;
            cur->next->next = tmp;
        }
        cur = cur->next;
    }
}