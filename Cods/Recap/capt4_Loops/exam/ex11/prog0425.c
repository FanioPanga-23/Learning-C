/******************************************************
 * PROG0425.C:	Digitar ate val estar entre [1 - 100] *
 * AUTOR:	Fânio Panga			      *
 * DATA:	02/05/2025			      *
 * ****************************************************/

#include <stdio.h>

int	main(void)
{
	int	num;
	int	i;

	printf("======== Digitar numero ate valor estar entre [1 - 100]  ========\n\n");
	do
	{
		printf("Digite um numero inteiro: ");
		scanf(" %d", &num);
	} while (num <= 0 || num > 100);
}
