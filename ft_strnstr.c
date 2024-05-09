#include "libft.h"

char	*ft_strnstr (const char *str, const char *src, size_t len)
{
	size_t	i;
	int		a;
	char	*res;

	i = 0;
	a = 0;
	res = NULL;
	if (str == src || ft_strlen(src) == 0)
		return ((char *)str);
	while (str[i] != '\0' && i < len)
	{
		a = 0;
		while (str[i + a] == src[a] && src[a] != '\0')
		{
			if (i + a >= len)
				return (NULL);
			a++;
		}
		if (src[a] == '\0')
			return ((char *)&str[i]);
		i++;
	}
	return (res);
}
