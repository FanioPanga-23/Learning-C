/************************************************************
 * PROG0210V2.C:	Leitura e escrita de Char	    *
 * AUTOR:		Fânio Panga			    *
 * DATA:		03/04/2025			    *
 * **********************************************************/

#include <stdio.h>

int	main(void)
{
	char	ch;

	printf("Digite um Caractere: ");
	ch = getchar();
	printf("O caractere introduzido foi => '%c'\n", ch);
}
