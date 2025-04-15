/***********************************************************
 * PROG0210.C:	Ler e printar um char			   *
 * AUTOR:	Fânio Panga				   *
 * DATA:	03/04/2025				   *
 * *********************************************************/

#include <stdio.h>

int	main(void)
{
	char	ch;

	printf("Digite um Caractere: ");
	scanf(" %c", &ch);
	printf("O caractere introduzido foi => '%c'\n", ch);
}
