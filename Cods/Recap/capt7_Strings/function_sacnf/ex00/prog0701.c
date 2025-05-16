/********************************************************************************
 * PROG0701.C:	Ler nome e sobrenome, e printar na tela				*
 * AUTOR:	Fânio Panga							*
 * DATA:	15/05/2025							*
 * ******************************************************************************/

#include <stdio.h>

int	main(void)
{
	char	nome[50];
	char	sobrenome[50];

	printf("Insira o nome: ");
	scanf("%s", nome);
	printf("Insira o sobrenome: ");
	scanf("%s", sobrenome);
	printf("Nome Completo: %s %s\n", nome, sobrenome);
}
