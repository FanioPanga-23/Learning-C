#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strpad(char *s)
{
	int	i;

	i = ft_strlen(s);
	s[2*i] = s[i];
	while (i >= 0)
	{
		s[i * 2] = s[i];
		s[i * 2 + 1] = ' ';
		i--;
	}
	return (s);
}
