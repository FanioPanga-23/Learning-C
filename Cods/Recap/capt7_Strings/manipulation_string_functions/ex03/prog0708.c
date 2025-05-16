/************************************************************************************************
 * PROG0708.C:	Concatena a string 'orig' no final da string 'dest'				*
 * AUTOR:	Fânio Panga									*
 * DATA:	15/05/2025									*
 * **********************************************************************************************/

#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *orig)
{
	int	i;
	int	length;

	i = 0;
	length = ft_strlen(dest);
	while (dest[length++] = orig[i++])
		;
	dest[length] = '\0';
	return (dest);
}
