#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_Entremeado(char *s, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < ft_strlen(s))
	{
		s[j] = s[i];
		j++;
		i += n + 1;
	}
	s[j] = '\0';
	return (s);
}
