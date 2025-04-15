/************************************************************
 * PROG0327.C:	Num dias em Fevereiro com if-esle	    *
 * AUTOR:	Fânio Panga				    *
 * DATA:	15/04/2025				    *
 * **********************************************************/

#include <stdio.h>

int	main(void)
{
	int	ano;
	int	is_b;
	int	fev;

	fev = 28;
	printf("======== DIAS EM FEVEREIRO  ========\n\n");
	printf("Ano: ");
	scanf("%d", &ano);
	is_b = ( (ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0 )?1:0;
	if (is_b)
		printf("Fevereiro => 29 dias\n");
	else
		printf("Fevereiro => 28 dias\n");
}
