/********************************************************************************
 * PROG0610.C:	Copiar caracteres do vetor 'orig' para 'dest			*
 * AUTOR:	Fânio Panga							*
 * DATA:	14/05/2025							*
 * ******************************************************************************/

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
