#include <stdio.h>

char	*ft_strcpy(char *dest, char *orig)
{
	int	i;

	i = 0;
	while (orig[i] != '\0')
	{
		dest[i] = orig[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
