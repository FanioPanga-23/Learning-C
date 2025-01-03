#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_Is_Len_OK(char *str, int length)
{
	return (ft_strlen(str) == length);
}
