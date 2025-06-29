#include <stdio.h>

char	*ft_strchr(char *s, char ch)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			return (s + i);
		i++;
	}
	return (NULL);
}
