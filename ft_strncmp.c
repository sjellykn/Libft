#include "libft.h"

int	ft_strncmp (const char *str1, const char *str2, size_t num)
{
	unsigned char	*s3;
	unsigned char	*s4;
	size_t			c;

	s3 = (unsigned char *)str1;
	s4 = (unsigned char *)str2;
	c = 0;
	while ((s3[c] - s4[c]) == 0 && num > c && (s3[c] != '\0' && s4[c] != '\0'))
	{
		c++;
	}
	if (c == num)
		return (0);
	return (s3[c] - s4[c]);
}
