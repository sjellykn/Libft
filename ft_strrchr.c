#include "libft.h"

char	*ft_strrchr (const char *str, int ch)
{
	char	*result;
	char	chr;

	chr = ch;
	result = 0;
	while (*str != '\0')
	{
		if (*str == chr)
			result = (char *)str;
		str++;
	}
	if (chr == '\0')
		result = (char *)str;
	return (result);
}