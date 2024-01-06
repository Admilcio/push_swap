
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
