#include <stdio.h>
#include "ft_list.h"

int		main(void)
{
	t_list	*list;
	void	*data;
	int		i;
	
	i = 4;
	data = &i;
	list = ft_create_elem(data);
	printf("%d\n", *((int*)list->data));
}
