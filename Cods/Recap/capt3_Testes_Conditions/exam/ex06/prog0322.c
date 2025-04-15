/*************************************************************
 * PROG0322.C:	Igual a zero?				     *
 * AUTOR:	Fânio Panga				     *
 * DATA:	15/04/2025				     *
 * ***********************************************************/

#include <stdio.h>

int	main(void)
{
	int	num;

	printf("======== IGUAL A ZERO?  ========\n\n");
	printf("Digite um inteiro: ");
	scanf("%d", &num);
	if (num)
		printf("Diferente de zero!!\n");
	else
		printf("Igual a zero!!\n");
}
