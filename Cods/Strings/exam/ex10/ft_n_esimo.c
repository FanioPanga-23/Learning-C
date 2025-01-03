#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	ft_n_esimo(char *s, int n)
{
	if (n <= ft_strlen(s))
		return (s[n - 1]);
	return ('\0');
}
