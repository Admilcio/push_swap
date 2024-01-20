/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <ada-mata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:22:55 by ada-mata          #+#    #+#             */
/*   Updated: 2024/01/15 17:39:17 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Shifts down all elements of a stack by 1. 
// The last element becomes the first one | rra and rrb

void	reverse_rotate(t_list **stack)
{
	t_list		*tmp;
	t_list		*tmplast;

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
	reverse_rotate(stack_a);
	ft_putendl_fd("rra", 1);
}

void	rrb(t_list **stack_b)
{
	reverse_rotate(stack_b);
	ft_putendl_fd("rrb", 1);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_putendl_fd("rrr", 1);
}
