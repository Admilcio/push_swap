
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
