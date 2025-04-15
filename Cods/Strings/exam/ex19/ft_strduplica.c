#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strduplica(char *s)
{
	int	i;
	int	j;
	int	w;

	w = ft_strlen(s);
	j = w * 2;
	i = 0;
	while (w != j)
	{
		s[w] = s[i];
		w++;
		i++;
	}
	s[w] = '\0';
	return (s);
}
