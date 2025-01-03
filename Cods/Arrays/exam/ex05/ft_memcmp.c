#include <stdio.h>

int	ft_memcmp(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned) s1[i] - (unsigned) s2[i]);
		i++;
	}
	return (0);
}
