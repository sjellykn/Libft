#include "libft.h"

void	*ft_calloc (size_t count, size_t size)
{
	size_t	a;
	void	*res;

	a = count * size;
	res = malloc(a);
	if (res == NULL)
		return (res);
	ft_memset(res, 0, a);
	return (res);
}
