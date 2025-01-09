#include <stdio.h>

int	ft_isVowell(char ch)
{
	char	v[5] = "aeiou";
	int	i;

	i = 0;
	while (v[i] != '\0')
	{
		if (v[i] == ch)
			return (1);
		else
			if ((v[i] - 32) == ch)
				return (1);
		i++;
	}
	return (0);
}

char	*ft_First_Vogal(char *s)
{
	while (*s)
	{
		if (ft_isVowell(*s))
			return (s);
		s++;
	}
	return (NULL);
}
