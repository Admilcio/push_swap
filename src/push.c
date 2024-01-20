/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <ada-mata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:22:46 by ada-mata          #+#    #+#             */
/*   Updated: 2024/01/15 17:34:08 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Takes the first element of one stack 
// and puts it at the top of another | pa and pb

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

void	pb(t_list **a, t_list **b)
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
