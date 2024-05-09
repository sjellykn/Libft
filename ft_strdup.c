#include "libft.h"

char	*ft_strdup (const char *str)
{
	char	*str1;
	int		i;
	int		a;

	i = 0;
	a = 0;
	while (str[i] != '\0')
		i++;
	str1 = (char *)malloc(sizeof(*str1) * (i + 1));
	if (!str1)
		return (NULL);
	while (a < i)
	{
		str1[a] = str[a];
		a++;
	}
	str1[a] = '\0';
	return (str1);
}
