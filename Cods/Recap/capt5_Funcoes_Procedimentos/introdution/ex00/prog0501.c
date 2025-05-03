/******************************************************
 * PROG0501.C:	Contador e linhas de 20 asteriscos    *
 * AUTOR:	Fânio Panga			      *
 * DATA:	02/05/2025			      *
 * ****************************************************/

#include <stdio.h>

int	main(void)
{
	int	j;

	for (j = 1; j <= 20; j++)
		putchar('*');
	putchar('\n');
	printf("Numeros entre 1 e 5\n");
	for (j = 1; j <= 20; j++)
		putchar('*');
	putchar('\n');
	for (j = 1; j <= 5; j++)
		printf("%d\n", j);
	for (j = 1; j <= 20; j++)
		putchar('*');
	putchar('\n');
}
