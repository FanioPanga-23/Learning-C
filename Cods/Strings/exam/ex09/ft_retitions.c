#include <stdio.h>

int	ft_strcountc(char *s, char ch)
{
	int	i;
	int	oc;

	i = 0;
	oc = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			oc++;
		i++;
	}
	return (oc);
}

char	*ft_repetitions(char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (ft_strcountc(s, s[i]) > 1)
			s[j++] = s[i];
		i++;
	}
	s[j] = '\0';
	return (s);
}
