#include "libft.h"

char	*ft_strjoin (char const *s1, char const *s2)
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	str = (char *)malloc((sizeof(*str)) * (ft_strlen(s1) + ft_strlen(s2)));
	if (str == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		str[i] = *s1;
		i++;
		s1++;
	}
	while (*s2 != '\0')
	{
		str[i] = *s2;
		i++;
		s2++;
	}
	str[i] = '\0';
	return (str);
}
