/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <ada-mata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:38:51 by ada-mata          #+#    #+#             */
/*   Updated: 2024/01/09 16:44:19 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap.h"

void	ft_rra(t_list **first_node_a)
{
	ft_reverse_rotate(first_node_a);
	write (1, "rra\n", 4);
}

void	ft_rrb(t_list **first_node_b)
{
	ft_reverse_rotate(first_node_b);
	write (1, "rrb\n", 4);
}

void	ft_rrr(t_list **first_node_a, t_list **first_node_b)
{
	ft_reverse_rotate(first_node_a);
	ft_reverse_rotate(first_node_b);
	write (1, "rrr\n", 4);
}