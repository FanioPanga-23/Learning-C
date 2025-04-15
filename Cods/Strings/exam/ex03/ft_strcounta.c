#include <stdio.h>

int	ft_isAlphabet(char ch)
{
	return ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'));
}

int	ft_strcounta(char *s)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (s[i] != '\0')
	{
		if (ft_isAlphabet(s[i]) != 0)
			a++;
		i++;
	}
	return (a);
}
