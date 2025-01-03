#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/* Pode ser feita de um modo mais eficaz, usando as funcoes ft_strcat e ft_strmemcpy */
char	*ft_strins(char *dest, char *orig)
{
	int	lo;
	int	i;
	int	j;

	lo = ft_strlen(orig);
	i = 0;
	j = 0;
	while (ft_strlen(dest) >= i)
		orig[lo++] = dest[i++];
	while (ft_strlen(orig) >= j)
	{
		dest[j] = orig[j];
		j++;
	}
	return (dest);
}
