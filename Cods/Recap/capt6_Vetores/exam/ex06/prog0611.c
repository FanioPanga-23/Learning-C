/********************************************************************************
 * PROG0611.C:	checka se as n primeiras posi dos vet 's1' e 's2' sao iguais  	*
 * AUTOR:	Fânio Panga							*
 * DATA:	14/05/2025							*
 * ******************************************************************************/

#include <stdio.h>

int	ft_memcmp(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while (n > i)
	{
		if (s1[i] != s2[i])
			return ( (unsigned) s1[i] - (unsigned) s2[i] );
		i++;
	}
	return (1);
}
