/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <ada-mata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:27:15 by ada-mata          #+#    #+#             */
/*   Updated: 2024/01/15 14:27:18 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			x;
	unsigned char	y;
	unsigned char	*p;

	p = (unsigned char *) s;
	y = (unsigned char) c;
	x = 0;
	while (x < n)
	{
		if (p[x] == y)
			return ((void *)(p + x));
		x++;
	}
	return (NULL);
}
