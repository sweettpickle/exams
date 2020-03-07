#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *cur;
    t_list *tmp;

    while (*begin_list && cmp(data_ref, (*begin_list)->data) == 0)
    {
        cur = *begin_list;
        *begin_list = (*begin_list)->next;
        free(cur);
    }

    cur = *begin_list;
    while (cur && cur->next)
    {
        if (cmp(data_ref, cur->next->data) == 0)
        {
            tmp = cur->next;
            cur->next = cur->next->next;
            free(tmp);
        }
        cur = cur->next;
    }
}