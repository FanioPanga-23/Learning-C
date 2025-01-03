#include <stdio.h>

char	*ft_memcpy(char *dest, char *orig, int n)
{
	int	i;

	i = 0;
	while (*orig && i < n)
	{
		dest[i] = orig[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
