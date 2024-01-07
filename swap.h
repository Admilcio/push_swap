#ifndef SWAP_H
#define SWAP_H

# include "./libft/libft.h"

void  swap_a(t_list **a);
void  swap_b(t_list **b);
void  swap_ab(t_list **a, t_list **b);
void  rotate_a(t_list **a);
void  rotate_b(t_list **b);
void  rotate_ab(t_list **a, t_list **b);
void  r_rotate_a(t_list **a);
void  r_rotate_b(t_list **b);
void  r_rotate_ab(t_list **a, t_list **b);
void  push_a(t_list **a, t_list **b);
void  push_b(t_list **a, t_list **b);
void	ft_sort_three(t_list **stack_a);
void  ft_sort_five(t_list **stack_a, t_list **stack_b);

#endif