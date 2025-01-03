#include <stdio.h>

char	*ft_strdelc(char *s, char ch)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != ch)
			s[j++] = s[i];
		i++;
	}
	s[j] = '\0';
	return (s);
}
