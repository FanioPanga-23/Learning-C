/******************************************************
 * PROG0502.C:	Linha de 20 asteriscos		      *
 * AUTOR:	Fânio Panga			      *
 * DATA:	02/05/2025			      *
 * ****************************************************/

#include <stdio.h>

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 20)
	{
		putchar('*');
		i++;
	}
	putchar('\n');
	printf("%d\n", i);
}
