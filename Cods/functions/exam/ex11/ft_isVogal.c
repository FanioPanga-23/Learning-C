#include <stdio.h>

int	ft_isVogal(char ch)
{
	char	vogal [] = "aeiou";
	int	i;

	i = 0;
	while (vogal[i] != '\0')
	{
		if (ch == vogal[i])
			return (1);
		else
			if(ch == (vogal[i] - 32))
				return (1);
		i++;
	}
	return (0);
}
