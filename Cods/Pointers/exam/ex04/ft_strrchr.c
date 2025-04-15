#include <stdio.h>

char	*ft_strrchr(char *s, char ch)
{
	char	*ptr;

	ptr = s;
	while (*s)
	{
		if (*s == ch)
			ptr = s;
		s++;
	}
	if (*ptr == ch)
		return (ptr);
	return (NULL);
}
