#include <stdio.h>

int	ft_isUpper(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

char	*ft_strDellUpper(char *s)
{
	char	*ptr;
	char	*first;

	ptr = s;
	first = ptr;
	while (*s)
	{
		if (!ft_isUpper(*s))
			*ptr++ = *s;
		s++;
	}
	*ptr = '\0';
	return (first);
}
