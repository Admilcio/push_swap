

#include "../push_swap.h"

// Swaps first two elements of a stack | sa and sb

void	swap(t_list **stack)
{
	t_list	*tmp;

	if (ft_lstsize(*stack) < 2)
		return ;
	tmp = (*stack)->next;
	(*stack)->next = tmp->next;
	tmp->next = *stack;
	*stack = tmp;
}

void	sa(t_list **stack_a)
{
	swap(stack_a);
	ft_putendl_fd("sa", 1);
	
}

void	sb(t_list **stack_b)
{
	swap(stack_b);
	ft_putendl_fd("sb", 1);
}

void	ss(t_list **stack_a, t_list **stack_b)
{	
	swap(stack_a);
	swap(stack_b);
	ft_putendl_fd("ss", 1);
}

// Takes the first element of one stack and puts it at the top of another | pa and pb

void	pa(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!*b)
		return ;
	tmp2 = (*a);
	tmp = (*b)->next;
	ft_lstadd_front(a, *b);
	(*a)->next = tmp2;
	(*b) = tmp;
	ft_putendl_fd("pa", 1);
}

void   pb(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!*a)
		return ;
	tmp2 = (*b);
	tmp = (*a)->next;
	ft_lstadd_front(b, *a);
	(*b)->next = tmp2;
	(*a) = tmp;
	ft_putendl_fd("pb", 1);
}

// Shift up all elements of a stack by 1. The first element becomes the last one | ra and rb

void	rotate(t_list **stack)
{
	t_list	*tmp;

	tmp = (*stack)->next;
	ft_lstadd_back(stack, *stack);
	(*stack)->next = NULL;
	*stack = tmp;
}

void	ra(t_list **stack_a)
{
	rotate(stack_a);
	ft_putendl_fd("ra", 1);
}

void	rb(t_list **stack_b)
{
	rotate(stack_b);
	ft_putendl_fd("rb", 1);
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_putendl_fd("rr", 1);
}


// Shifts down all elements of a stack by 1. The last element becomes the first one | rra and rrb

void	reverseRotate(t_list **stack)
{
  t_list	*tmp;
	t_list	*tmplast;

	tmplast = ft_lstlast(*stack);
	tmp = (*stack);
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next = 0;
	ft_lstadd_front(stack, tmplast);
	*stack = tmplast;
}

void	rra(t_list **stack_a)
{
	reverseRotate(stack_a);
	ft_putendl_fd("rra", 1);
}

void	rrb(t_list **stack_b)
{
	reverseRotate(stack_b);
	ft_putendl_fd("rrb", 1);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	reverseRotate(stack_a);
	reverseRotate(stack_b);
	ft_putendl_fd("rrr", 1);
}

