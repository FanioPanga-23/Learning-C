/*************************************************************
 * PROG0216.C:	Solicita e apresenta data no f dd/mm/aa	     *
 * AUTOR:	Fânio Panga				     *
 * DATA:	05/04/2025				     *
 * ***********************************************************/

#include <stdio.h>

int	main(void)
{
	int	dia;
	int	mes;
	int	ano;

	printf("Vamos precisar de uma data qualquer..\n");
	printf("Dia: ");
	scanf(" %d", &dia);
	printf("Mes: ");
	scanf(" %d", &mes);
	printf("Ano: ");
	scanf(" %d", &ano);
	printf("Data inserida: %d/%d/%d\n", dia, mes, ano);
}
