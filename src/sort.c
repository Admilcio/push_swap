/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <ada-mata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:39:16 by ada-mata          #+#    #+#             */
/*   Updated: 2024/01/09 19:16:45 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap.h"

void	sort_two(t_list **stack_a)
{
	if((*stack_a)->number > (*stack_a)->next->number)
		ft_sa(stack_a);
}

bool	ft_check_if_sorted(t_list *stack_a)
{
	while (stack_a->next != NULL && stack_a->number < stack_a->next->number)
	{
		stack_a = stack_a->next;
	}
	if (stack_a->next == NULL)
		return (true);
	else
		return (false);
}

void	sort_three(t_list **stack_a)
{
	while (!ft_check_if_sorted(*stack_a))
	{
		if ((*stack_a)->number > (*stack_a)->next->number)
			ft_sa(stack_a);
		else
			ft_rra(stack_a);
	}
}

int find_min(t_list *stack_a)
{
	t_list *tmp;
	int min;

	tmp = stack_a;
	min = tmp->number;
	while (tmp)
	{
		if (tmp->number < min)
			min = tmp->number;
		tmp = tmp->next;
	}
	return (min);
}

int find_next_min(t_list **stack_a, int current_min)
{
	t_list *tmp = *stack_a;
	int next_min = INT_MAX;

	while (tmp)
	{
		if (tmp->number > current_min && tmp->number < next_min)
			next_min = tmp->number;
		tmp = tmp->next;
	}

	return next_min;
}

int find_max(t_list *stack_a)
{
	t_list *tmp;
	int max;

	tmp = stack_a;
	max = tmp->number;
	while (tmp)
	{
		if (tmp->number > max)
			max = tmp->number;
		tmp = tmp->next;
	}
	return (max);
}

void sort_four_five(t_list **stack_a, t_list **stack_b)
{
	while (ft_lstsize(*stack_a) > 3)
	{
		int min_value = find_min(*stack_a);

		while ((*stack_a)->number != min_value)
		{
			if (ft_rotate_direction(*stack_a) == 1)
				ft_ra(stack_a);
			else
				ft_rra(stack_a);
		}

		ft_pb(stack_a, stack_b);
	}

    sort_three(stack_a);

    while (ft_lstsize(*stack_b) > 0)
        ft_pa(stack_a, stack_b);
}

void big_sort(t_list **stack_a, t_list **stack_b)
{
	int	bit_pos;
	int size; 
	int count;

	size = ft_lstsize(*stack_a);
	bit_pos = 1;
	int counter = 0;
	while (ft_check_if_sorted(*stack_a) == false && counter < 3)
	{
		count = 0;
		while (*stack_a != NULL && count++ < size)
		{
			if (((*stack_a)->index & bit_pos) == 0)
			{
				ft_pb(stack_a, stack_b);
			}
			else
				ft_ra(stack_a);
		}
		while (*stack_b != NULL)
		{
			ft_pa(stack_a, stack_b);
		}
		bit_pos *= 2;
		counter++;
	}
}

int	ft_rotate_direction(t_list *first_node)
{
	int	smallest;
	int	index;
	int	smallest_index;
	int	list_size;

	index = 0;
	smallest_index = 0;
	smallest = 2147483647;
	list_size = ft_lstsize(first_node) / 2;
	while (first_node)
	{
		if (first_node->number < smallest)
		{
			smallest = first_node->number;
			smallest_index = index;
		}
		first_node = first_node->next;
		index++;
	}
	if (smallest_index < list_size)
		return (1);
	else
		return (-1);
}