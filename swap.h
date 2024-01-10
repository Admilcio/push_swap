/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <ada-mata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:39:36 by ada-mata          #+#    #+#             */
/*   Updated: 2024/01/09 18:33:04 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_H
#define SWAP_H

# include "./libft/libft.h"

void	ft_sa(t_list **first_node_a);
void	ft_sb(t_list **first_node_b);
void	ft_ss(t_list **first_node_a, t_list **first_node_b);
void	ft_pa(t_list **a, t_list **b);
void	ft_pb(t_list **a, t_list **b);
void	ft_ra(t_list **first_node_a);
void	ft_rb(t_list **first_node_b);
void	ft_rr(t_list **first_node_a, t_list **first_node_b);
void	ft_rra(t_list **first_node_a);
void	ft_rrb(t_list **first_node_b);
void	ft_rrr(t_list **first_node_a, t_list **first_node_b);
void	sort_three(t_list **stack_a);
void print_list(t_list *list);
int     find_min(t_list *stack_a);
int     find_max(t_list *stack_a);
int	ft_rotate_direction(t_list *first_node);
void	sort_four_five(t_list **stack_a, t_list **stack_b);
void	ft_push(t_list **first_node_src, t_list **first_node_dst);
void	ft_rotate(t_list **first_node);
void	ft_reverse_rotate(t_list **first_node);
void	ft_swap(t_list **first_node);
bool	ft_check_if_sorted(t_list *stack_a);
void	ft_sort(t_list **stack_a, t_list **stack_b);
void	sort_two(t_list **stack_a);
void big_sort(t_list **stack_a, t_list **stack_b);

#endif