#include "ft_list.h"
#include <unistd.h>

void	ft_list_remove_if(t_list **begin_list, 
void *data_ref, int (*cmp)())
{
	t_list *cur;
	t_list *tmp;

	while (*begin_list && cmp((*begin_list)->data,data_ref) == 0)
	{
		
	}

}
