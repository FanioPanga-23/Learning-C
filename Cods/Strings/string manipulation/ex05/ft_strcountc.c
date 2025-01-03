#include <stdio.h>

int	ft_strcountc(char *str, char ch)
{
	int	i;
	int	o;

	o = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			o++;
		i++;
	}
	return (o);
}
