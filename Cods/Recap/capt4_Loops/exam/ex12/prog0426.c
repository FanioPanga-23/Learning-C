/******************************************************
 * PROG0426.C:	Tabela ASCII			      *
 * AUTOR:	Fânio Panga			      *
 * DATA:	02/05/2025			      *
 * ****************************************************/

#include <stdio.h>

int	main(void)
{
	int	i;

	i = 0;
	printf("======== TABELA ASCII  ========\n\n");
	while (i <= 255)
	{
		printf("%2d --> %c\n", i, (int)i);
		i++;
	}
}
