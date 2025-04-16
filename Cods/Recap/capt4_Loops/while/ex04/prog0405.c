/************************************************************************
 * PROG0405.C:	Primeiras 5 tabuadas					*
 * AUTOR:	Fânio Panga						*
 * DATA:	15/04/2025						*
 * **********************************************************************/

#include <stdio.h>

int	main(void)
{
	int	i;
	int	j;

	i = 1;
	while (i <= 5)
	{
		j = 1;
		while (j <= 10)
		{
			printf("%2d * %2d = %2d\n", i, j, (i * j));
			j++;
		}
		i++;
	}
}
