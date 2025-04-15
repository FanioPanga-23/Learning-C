/***************************************************************
 * PROG0326.C:	Ano bissexto				       *
 * AUTOR:	Fânio Panga				       *
 * DATA:	15/04/2025				       *
 * *************************************************************/

#include <stdio.h>

int	main(void)
{
	int	ano;

	printf("======== ANO BISSEXTO  ========\n\n");
	while (1)
	{
		printf("ANO:	");
		scanf("%d", &ano);
		if (ano >= 1)
			break;
		printf("ERRO: Ano invalido!!\n");
	}
	if ( (ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0 )
		printf("Ano Bissexto!!\n");
	else
		printf("Ano normal!!\n");
}
