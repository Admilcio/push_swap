/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <ada-mata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:33:48 by ada-mata          #+#    #+#             */
/*   Updated: 2024/01/09 17:15:55 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap.h"

void	ft_swap(t_list **a)
{
	t_list	*tmp;

	tmp = (*a)->next;
	(*a)->next = tmp->next;
	tmp->next = *a;
	*a = tmp;
}

void	ft_rotate(t_list **a)
{
	t_list	*tmp;

	tmp = (*a)->next;
	ft_lstadd_back(a, *a);
	(*a)->next = NULL;
	*a = tmp;
}

void	ft_reverse_rotate(t_list **a)
{
    t_list	*tmp;
	t_list	*tmplast;

	tmplast = ft_lstlast(*a);
	tmp = (*a);
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next = 0;
	ft_lstadd_front(a, tmplast);
	*a = tmplast;
}

void	ft_push(t_list **a, t_list **b)
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
}
