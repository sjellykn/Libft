#include "libft.h"

size_t	ft_strlcat (char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	a;
	size_t	result;

	i = 0;
	a = 0;
	result = 0;
	while (dst[i] != '\0')
		i++;
	result = i;
	if (i >= size)
		return (ft_strlen(src) + size);
	while (src[a] != '\0' && i < (size - 1))
	{
		dst[i] = src[a];
		i++;
		a++;
	}
	dst[i] = '\0';
	return (result + ft_strlen(src));
}
