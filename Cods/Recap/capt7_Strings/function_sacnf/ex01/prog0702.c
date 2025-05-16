/********************************************************************************
 * PROG0702.C:	Leitura de nome completo com a function 'scanf'			*
 * AUTOR:	Fânio Panga							*
 * DATA:	15/05/2025							*
 * ******************************************************************************/

#include <stdio.h>

int	main(void)
{
	char	nome[50];

	printf("Insira o nome: ");
	scanf("%s", nome);
	printf("Nome Completo: %s\n", nome);
}
