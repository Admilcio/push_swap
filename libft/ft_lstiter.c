/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <ada-mata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 11:44:53 by mcerchi           #+#    #+#             */
/*   Updated: 2024/01/09 15:49:11 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(int *))
{
	if (lst == NULL)
		return ;
	while (lst != NULL)
	{
		f(&lst->value);
		lst = lst->next;
	}
}
