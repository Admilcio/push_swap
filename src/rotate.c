/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <ada-mata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:38:57 by ada-mata          #+#    #+#             */
/*   Updated: 2024/01/09 16:38:35 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap.h"

void	ft_ra(t_list **first_node_a)
{
	ft_rotate(first_node_a);
	write (1, "ra\n", 3);
}

void	ft_rb(t_list **first_node_b)
{
	ft_rotate(first_node_b);
	write (1, "rb\n", 3);
}

void	ft_rr(t_list **first_node_a, t_list **first_node_b)
{
	ft_rotate(first_node_a);
	ft_rotate(first_node_b);
	write (1, "rr\n", 3);
}