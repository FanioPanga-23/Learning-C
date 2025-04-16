/************************************************************************
 * PROG0407.C:	Soma e produto dos n primeiros numeros naturais		*
 * AUTOR:	Fânio Panga						*
 * DATA:	15/04/2025						*
 * **********************************************************************/

#include <stdio.h>

int	main(void)
{
	int	soma;
	int	produto;
	int	num;
	int	i;

	soma = 0;
	produto = 1;
	printf("======== SOMA E PRODUTO  ========\n\n");
	printf("Quantidade: ");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		soma += i;
		produto *= i;
	}
	printf("SOMA => %2d\nPRODUTO => %2d\n", soma, produto);
}
