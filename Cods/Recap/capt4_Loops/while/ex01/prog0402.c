/*****************************************************************************
 * PROG0402.C:	Contagem regressiva de 10-1				     *
 * AUTOR:	Fânio Panga						     *
 * DATA:	15/04/2025						     *
 * ***************************************************************************/

#include <stdio.h>

int	main(void)
{
	int	i;

	i = 10;
	while (i)
		printf("%d\n", i--);
}
