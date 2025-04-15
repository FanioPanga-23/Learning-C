#include <stdio.h>

int	ft_isDigit(char ch)
{
	return (ch >= '0' && ch <= '9');
}

int	ft_strcountd(char *str)
{
	int	i;
	int	od;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isDigit(str[i]))
			od++;
		i++;
	}
	return (od);
}
