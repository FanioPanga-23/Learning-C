#include <stdio.h>

char	*ft_strpack(char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != s[j])
			s[++j] = s[i];
		i++;
	}
	s[++j] = '\0';
	return (s);
}
