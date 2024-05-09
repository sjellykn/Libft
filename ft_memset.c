#include "libft.h"

void	*ft_memset (void *b, int c, size_t len)
{
	unsigned char	*a;
	unsigned char	i;

	a = b;
	i = c;
	while (len > 0)
	{
		*a = i;
		a++;
		len--;
	}
	return (b);
}
