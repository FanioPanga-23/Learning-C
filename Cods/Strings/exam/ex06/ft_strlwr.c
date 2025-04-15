#include <stdio.h>

int	ft_isUpper(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

char	*ft_strlwr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isUpper(str[i]) != 0)
			str[i] += 32;
		i++;
	}
	return (str);
}
