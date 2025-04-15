#include <stdio.h>

char	*ft_Prox_Char(char *s)
{
	int	i;

	while (s[i] != '\0')
	{
		s[i] = s[i] + 1;
		i++;	
	}
	return (s);
}
