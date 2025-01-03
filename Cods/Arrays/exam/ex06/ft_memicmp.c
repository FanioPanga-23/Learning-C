#include <stdio.h>

char	ft_toLower(char ch)
{
	if ((ch >= 'A' && ch <= 'Z'))
		return (ch + 32);
}

int	ft_memicmp(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (ft_toLower(s1[i]) != ft_toLower(s2[i]))
			return (ft_toLower(s1[i]) - ft_toLower(s2[i]));
		i++;
	}
	return (0);
}
