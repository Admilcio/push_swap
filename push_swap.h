
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

void	printList(t_list *head);
int		ft_lstsize(t_list *head);

void	ft_error(char *msg);
int		is_sorted(t_list **stack);
int		get_distance(t_list **stack, int index);
void	free_stack(t_list **stack);
void	ft_free(char **str);

// Algorithm utils
void	big_sort(t_list **stack_a, t_list **stack_b);
void	ft_sort(t_list **stack_a, t_list **stack_b);
void	index_stack(t_list **stack);

// Instruction functions
void		swap(t_list **stack);
void		rotate(t_list **stack);
void		reverseRotate(t_list **stack);

void		sa(t_list **stack_a);
void		sb(t_list **stack_b);
void		ss(t_list **stack_a, t_list **stack_b);
void		pa(t_list **stack_a, t_list **stack_b);
void		pb(t_list **stack_b, t_list **stack_a);
void		ra(t_list **stack_a);
void		rb(t_list **stack_b);
void		rr(t_list **stack_a, t_list **stack_b);
void		rra(t_list **stack_a);
void		rrb(t_list **stack_b);
void		rrr(t_list **stack_a, t_list **stack_b);
int			get_min(t_list *stack);

#endif

