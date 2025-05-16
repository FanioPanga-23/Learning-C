/********************************************************************************
 * Prog0704.C:	Ler nomes ate 'string' == empty					*
 * AUTOR:	Fânio Panga							*
 * DATA:	15/05/2025							*
 * ******************************************************************************/

#include <stdio.h>

int	main(void)
{
	char	nome[50];

	while (1)
	{
		printf("Nome: ");
		fgets(nome, sizeof(nome), stdin);
		if (nome[0] == 10)
			break;
		else
			printf("Nome Insirido: %s", nome);
	}
}
