
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*cp;

	if (n == 0)
		return ;
	i = -1;
	cp = s;
	while (++i < n)
		cp[i] = '\0';
}
