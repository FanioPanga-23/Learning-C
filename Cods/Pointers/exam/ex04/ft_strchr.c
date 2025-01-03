#include <stdio.h>

char	*ft_strchr(char *s, char ch)
{
	while (*s)
	{
		if (*s == ch)
			return (s);
		s++;
	}
	return (NULL);
}
