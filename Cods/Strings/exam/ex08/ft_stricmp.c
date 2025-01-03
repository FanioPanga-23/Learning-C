#include <stdio.h>

/*int	ft_isAlphabet(char ch)
{
	return ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'));
}

int	ft_ignore(char c1, char c2)
{
	return ((c1 + 32 == c2) || (c1 - 32 == c2));
}*/

int	ft_stricmp(char  *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if ((s1[i] + 32 == s2[i]) || (s1[i] - 32 == s2[i]))
		{
			i++;
			continue;
		}
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
