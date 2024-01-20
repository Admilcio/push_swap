/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <ada-mata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:22:25 by ada-mata          #+#    #+#             */
/*   Updated: 2024/01/20 17:04:36 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

//Prints the Linked List
void	print_list(t_list *list)
{
	while (list)
	{
		ft_printf("%d\n", list->value);
		list = list->next;
	}
}

static int	check_repeat(t_list *stack_a)
{
	t_list	*current;
	t_list	*next;

	current = stack_a;
	while (current)
	{
		next = current->next;
		while (next)
		{
			if (current->value == next->value)
				return (1);
			next = next->next;
		}
		current = current->next;
	}
	return (0);
}

static void	init_stack(t_list **stack, int argc, char **argv)
{
	t_list	*new;
	char	**args;
	int		i; 

	i = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		new = ft_lstnew(ft_atoi(args[i]));
		ft_lstadd_back(stack, new);
		i++;
	}
	index_stack(stack);
	if (argc == 2)
		ft_free(args);
}

static void	sort_stack(t_list **stack_a, t_list **stack_b)
{
	if (is_sorted(stack_a) || ft_lstsize(*stack_a) == 0
		|| ft_lstsize(*stack_a) == 1)
		return ;
	if (ft_lstsize(*stack_a) <= 5)
		ft_sort(stack_a, stack_b);
	else
		big_sort(stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (argc < 2)
		return (-1);
	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	*stack_b = NULL;
	init_stack(stack_a, argc, argv);
	if (check_repeat(*stack_a))
	{
		free_stack(stack_a);
		free_stack(stack_b);
		return (write(2, "Error\n", 6));
	}
	sort_stack(stack_a, stack_b);
	print_list(*stack_a);
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
