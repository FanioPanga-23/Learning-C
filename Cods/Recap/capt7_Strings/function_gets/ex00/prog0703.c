/********************************************************************************
 * PROG0703.C:	Leitura de 'string' com a funcao 'gets'				*
 * AUTOR:	Fânio Panga							*
 * DATA:	15/05/2025							*
 * ******************************************************************************/

#include <stdio.h>

int	main(void)
{
	char	nome[50];

	printf("Insira o Nome Completo: ");
	/*
	 *Usei a funcao 'fgets' pelo facto d'a 'gets' estar em descontinuada
	 *por questoes de inseguranca*/
	fgets(nome, sizeof(nome), stdin);
	printf("Nome Completo: %s", nome);
}
