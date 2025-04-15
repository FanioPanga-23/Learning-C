/*************************************************************
 * PROG0321.C:	Igual a zero?				     *
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
	num == 0? printf("Igual a zero!!\n"): printf("Diferente de zero!!\n");
}
