#include <stdio.h>

int	ft_isVowel(char ch)
{
	char	vowels[] = "aeiou";
	int	i;

	i = 0;
	while (vowels[i] != '\0')
	{
		if (ch == vowels[i])
			return (1);
		else
			if (ch == (vowels[i] - 32))
				return (1);
		i++;
	}
	return (0);
}

char	*ft_first_vogal(char *s)
{
	while (*s)
	{
		if (ft_isVowel(*s))
			return (s);
		s++;
	}
	return (NULL);
}
