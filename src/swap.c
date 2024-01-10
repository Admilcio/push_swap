/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <ada-mata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:39:24 by ada-mata          #+#    #+#             */
/*   Updated: 2024/01/09 16:39:58 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap.h"

void	ft_sa(t_list **first_node_a)
{
	ft_swap(first_node_a);
	write (1, "sa\n", 3);
}

void	ft_sb(t_list **first_node_b)
{
	ft_swap(first_node_b);
	write (1, "sb\n", 3);
}

void	ft_ss(t_list **first_node_a, t_list **first_node_b)
{
	ft_swap(first_node_a);
	ft_swap(first_node_b);
	write (1, "ss\n", 3);
}