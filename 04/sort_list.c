#include "ft_list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *i;
    t_list *j;
    int tmp;

    i = lst;
    while (i->next)
    {
        j = i->next;
        while (j)
        {
            if (cmp(i->data, j->data) == 0)
            {
                tmp = i->data;
                i->data = j->data;
                j->data = tmp;
            }
            j = j->next;
        }
        i = i->next;
    }
    return (lst);
}