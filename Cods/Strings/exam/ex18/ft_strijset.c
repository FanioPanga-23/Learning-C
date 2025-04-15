#include <stdio.h>

char	*ft_strijset(char *s, int i, int j, char ch)
{
	while (i <= j && s[i] != '\0')
		s[i++] = ch;
	return (s);
}
