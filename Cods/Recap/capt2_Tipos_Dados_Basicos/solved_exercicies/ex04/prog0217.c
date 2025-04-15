/************************************************************
 * PROG0217.C:	Recebe data em aa/mm/dd mostra em dd/mm/aaa *
 * AUTOR:	Fânio Panga				    *
 * DATA:	05/04/2025				    *
 * **********************************************************/

#include <stdio.h>

int	main(void)
{
	int	dia;
	int	mes;
	int	ano;

	printf("Informe uma data no formato aaaa-mm-dd\n");
	printf("Ano: ");
	scanf("%d", &ano);
	printf("Mes: ");
	scanf(" %d", &mes);
	printf("Dia: ");
	scanf(" %d", &dia);
	printf("Data inserida: %d/%d/%d\n", dia, mes, ano);
}
