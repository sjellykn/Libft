#include "libft.h"

void	*ft_memchr (const void *s, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	c1;

	s1 = (unsigned char *)s;
	c1 = (unsigned char)c;
	while (n > 0)
	{
		if (*s1 == c1)
			return (s1);
		else
			s1++;
		n--;
	}
	return (0);
}
