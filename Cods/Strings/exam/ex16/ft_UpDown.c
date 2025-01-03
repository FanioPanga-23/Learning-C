#include <stdio.h>

int	ft_isLower(char ch)
{
	return ((ch >= 97) && (ch <= 122));
}

int	ft_isUpper(char ch)
{
	return ((ch >= 65) && (ch <= 90));
}

char	*ft_UpDown(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (ft_isLower(s[i]) != 0)
				s[i] = s[i] - 32;
		}
		else
			if (ft_isUpper(s[i]) != 0)
				s[i] = s[i] + 32;
		i++;
	}
	return (s);
}
