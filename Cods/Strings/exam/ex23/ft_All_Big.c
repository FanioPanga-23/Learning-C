#include <stdio.h>

int	ft_isLower(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

char	*ft_All_Big(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (ft_isLower(s[i]) != 0)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
