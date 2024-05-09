#include "libft.h"

size_t	ft_strlcpy (char *dst, const char *src, size_t size)
{
	unsigned int	i;
	size_t			a;

	i = 0;
	a = 0;
	if (src == NULL)
		return (0);
	while (src[i] != '\0')
		i++;
	if (dst == NULL)
		return (i);
	if (size == 0)
		return (i);
	while (src[a] != '\0' && a < (size - (size_t)1))
	{
		dst[a] = src[a];
		a++;
	}
	dst[a] = '\0';
	return (i);
}
