#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

char	*ft_strnset(char *s, char ch, int n)
{
	int	i;

	if (ft_strlen(s) < n)
		n = ft_strlen(s);
	i = 0;
	while (i < n)
	{
		s[i] = ch;
		i++;
	}
	return (s);
}
