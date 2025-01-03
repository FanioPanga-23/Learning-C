#include <stdio.h>

int	ft_isAlpha(char ch)
{
	return (((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z')));
}

int	ft_isDigit(char ch)
{
	return (ch >= '0' && ch <= '9');
}

int	ft_Is_Alfa_Digit(char *str)
{
	int	i;

	i = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			if (!ft_isAlpha(str[i]))
				return (0);
		if (i % 2 != 0)
			if (!ft_isDigit(str[i]))
				return (0);
	}
	return (1);
}
