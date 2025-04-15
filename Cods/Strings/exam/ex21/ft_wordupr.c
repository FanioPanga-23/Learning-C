#include <stdio.h>

char	ft_isLower(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

char	ft_isUpper(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

char	*ft_wordupr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (ft_isLower(s[0]) != 0)
			s[0] = s[0] - 32;
		if (s[i - 1] == ' ' && ft_isLower(s[i]) != 0)
			s[i] = s[i] - 32;
		else
			if (s[i-1] != ' ' && ft_isUpper(s[i]) != 0)
				s[i] = s[i] + 32;
		i++;
	}
	return (s);
}
