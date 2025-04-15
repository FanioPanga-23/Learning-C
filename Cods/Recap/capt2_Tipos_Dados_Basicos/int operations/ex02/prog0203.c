/********************************************************
 * PROG0203.C:	Leitura e soma de dois valores inteiros	*
 * AUTOR:	Fânio Panga				*
 * DATA:	01/04/2025				*
 * ******************************************************/

#include <stdio.h>

int	main(void)
{
	int	n1;
	int	n2;

	printf("Introduza 2 valores inteiros: ");
	scanf("%d%d", &n1, &n2);
	fflush(stdin);
	printf("O resultado de %d + %d = %d\n", n1, n2, (n1 + n2));
}
