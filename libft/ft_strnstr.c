
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*src;
	char	*tf;

	i = 0;
	j = 0;
	src = (char *)haystack;
	tf = (char *)needle;
	if (*needle == '\0')
		return (src);
	while (src[i] != '\0' && i < len)
	{
		while (i + j < len && tf[j] != '\0' && src[i + j] == tf[j])
		{
			j++;
			if (tf[j] == '\0')
				return (src + i);
		}
		j = 0;
		i++;
	}
	return (0);
}
