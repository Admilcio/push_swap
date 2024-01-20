/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <ada-mata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:23:05 by ada-mata          #+#    #+#             */
/*   Updated: 2024/01/19 17:24:29 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_min(t_list *stack)
{
	t_list	*tmp;
	int		min;

	tmp = stack;
	min = tmp->value;
	while (tmp)
	{
		if (tmp->value < min)
			min = tmp->value;
		tmp = tmp->next;
	}
	return (min);
}

static void	sort_3(t_list **stack_a)
{
	while (!is_sorted(stack_a))
	{
		if ((*stack_a)->value > (*stack_a)->next->value)
			sa(stack_a);
		else
			rra(stack_a);
	}
}

int	ft_pos_direction(t_list *a)
{
	int	smallest;
	int	index;
	int	smallest_index;
	int	list_size;

	index = 0;
	smallest_index = 0;
	smallest = 2147483647;
	list_size = ft_lstsize(a) / 2;
	while (a)
	{
		if (a->value < smallest)
		{
			smallest = a->value;
			smallest_index = index;
		}
		a = a->next;
		index++;
	}
	if (smallest_index < list_size)
		return (1);
	else
		return (-1);
}

void	sort_4_5(t_list **stack_a, t_list **stack_b)
{
	int	min_value;

	while (ft_lstsize(*stack_a) > 3)
	{
		min_value = get_min(*stack_a);
		while ((*stack_a)->value != min_value)
		{
			if (ft_pos_direction(*stack_a) == 1)
				ra(stack_a);
			else
				rra(stack_a);
		}
		pb(stack_a, stack_b);
	}
	sort_3(stack_a);
	while (ft_lstsize(*stack_b) > 0)
		pa(stack_a, stack_b);
}

void	ft_sort(t_list **stack_a, t_list **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (size == 2)
		sa(stack_a);
	else if (size == 3)
		sort_3(stack_a);
	else if (size >= 4 && size <= 5)
		sort_4_5(stack_a, stack_b);
}
