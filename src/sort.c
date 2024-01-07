#include "../swap.h"

void	ft_sort_three(t_list **stack_a)
{
	int		i;
	int		j;
	int		k;
	t_list	*tmp;

	tmp = NULL;
	i = 0;
	j = 0;
	k = 0;
	while (!(i < j && j < k && k > i))
	{
		tmp = *stack_a;
		i = tmp->data;
		tmp = tmp->next;
		j = tmp->data;
		tmp = tmp->next;
		k = tmp->data;
		if ((i > j && j < k && k > i)
			|| (i > j && j > k && k < i) || (i < j && j > k && k > i))
			swap_a(stack_a);
		if (i > j && j < k && k < i)
			rotate_a(stack_a);
		if (i < j && j > k && k < i)
			r_rotate_a(stack_a);
    else
      break ;
	}
}