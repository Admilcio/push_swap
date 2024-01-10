/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <ada-mata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:39:28 by ada-mata          #+#    #+#             */
/*   Updated: 2024/01/09 18:33:27 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap.h"

void	ft_write_lst(t_list **stack_a, int argc, char **argv, int i)
{
	t_list	*tmp;

	tmp = NULL;
	while (i < argc)
	{
		tmp = ft_lstnew(ft_atoi(argv[i]));
		ft_lstadd_back(stack_a, tmp);
		i++;
	}
	tmp = NULL;
}

void ft_sort(t_list **stack_a, t_list **stack_b)
{
	if (ft_check_if_sorted(*stack_a))
		return ;
	else if (ft_lstsize(*stack_a) == 2)
		sort_two(stack_a);
	else if (ft_lstsize(*stack_a) == 3)
		sort_three(stack_a);
	else if (ft_lstsize(*stack_a) <= 5)
		sort_four_five(stack_a, stack_b);
	else if (ft_lstsize(*stack_a) > 5)
		big_sort(stack_a, stack_b);
}

void	ft_check_argv(int argc, char **argv, t_list **stack_a)
{
	int		size;
	char	**arg;

	arg = NULL;
	size = 0;
	if (argc == 2)
	{
		arg = ft_split(argv[1], ' ');
		while (arg[size] != NULL)
			size++;
		ft_write_lst(stack_a, size, arg, 0);
		free(arg);
	}
	else if (argc >= 3)
		ft_write_lst(stack_a, argc, argv, 1);
}

void print_list(t_list *list)
{
  while (list != NULL)
  {
    printf("%d ", list->number);
    list = list->next;
  }
  write(1, "\n", 2);
}

int	main(int ac, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	// int		size;

	stack_a = NULL;
	stack_b = NULL;
	// size = 0;
	if (ac > 1)
	{
		ft_check_argv(ac, argv, &stack_a);
		ft_sort(&stack_a, &stack_b);
		// ft_free(stack_a);
		// ft_free(stack_b);
		print_list(stack_a);
	}
	else
		return (0);
}