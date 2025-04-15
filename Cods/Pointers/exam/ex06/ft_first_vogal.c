#include <stdio.h>

int	ft_isVowell(char ch)
{
	char	v[] = "aeiouAEIOU";
	int	i;

	i = 0;
	while (v[i] != '\0')
	{
		if (v[i] == ch)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_first_vogal(char *s)
{
	while (*s)
	{
		if (ft_isVowell(*s))
			return (s);
		s++;
	}
	return (NULL);
}
