/************************************************************
 * PROG0212.C:	Pede inteiro e mostra caractere		    *
 * AUTOR:	Fânio Panga				    *
 * DATA:	04/04/2025				    *
 * **********************************************************/

#include <stdio.h>

int	main(void)
{
	int	n_int;

	printf("Introduza um inteiro: ");
	scanf("%d", &n_int);
	printf("Foi inserido o valor => %d cujo Caractere => '%c'\nO Caractere seguinte => '%c' tem o ASCII nº %d\n", n_int, (char)n_int, (char)n_int +1, n_int + 1);
}
