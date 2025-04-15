#include <stdio.h>

char	ft_memset(char *v, char ch, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		v[i] = ch;
		i++;
	}
	return (*v);
}
