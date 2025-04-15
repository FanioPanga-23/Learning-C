#include <stdio.h>

char	*ft_allSpaces(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		s[i++] = ' ';
	return (s);
}
