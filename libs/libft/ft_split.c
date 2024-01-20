/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-mata <ada-mata@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:28:05 by ada-mata          #+#    #+#             */
/*   Updated: 2024/01/18 17:34:08 by ada-mata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char const *s, char c)
{
	size_t	len;

	len = 0;
	if (!*s)
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			len++;
		while (*s != c && *s)
			s++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**rstr;
	size_t	len;
	int		i;

	i = 0;
	rstr = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!rstr || !s)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				len = ft_strlen(s);
			else
				len = ft_strchr(s, c) - s;
			rstr[i++] = ft_substr(s, 0, len);
			s = s + len;
		}
	}
	rstr[i] = NULL;
	return (rstr);
}
