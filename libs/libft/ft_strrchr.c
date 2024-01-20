/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <ada-mata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:30:34 by ada-mata          #+#    #+#             */
/*   Updated: 2024/01/15 14:30:38 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;

	len = ft_strlen(s);
	if (!len && c == '\0')
		return ((char *)s);
	s += len - 1;
	if (c == '\0')
		return (ft_strchr(s, '\0'));
	while (len--)
	{
		if (*s == (char) c)
			return ((char *) s);
		s--;
	}
	return (0);
}
