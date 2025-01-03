#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_isLower(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

int	ft_isUpper(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

char	*ft_transform(char *str)
{
	int	i;
	int	j;

	j = ft_strlen(str);
	i = 0;
	while (str[i] != '\0')
	{
		while (i < (j / 2))
		{
			if (ft_isUpper(str[i]) != 0)
				str[i] = str[i] + 32;
			i++;
		}
		if (ft_isLower(str[i]) != 0)
			str[i] = str[i] - 32;
		i++;
	}
	return(str);
}
