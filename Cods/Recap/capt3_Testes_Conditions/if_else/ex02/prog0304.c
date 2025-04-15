/************************************************************
 * PROG0304.C:	Aumento salarial			    *
 * AUTOR:	Fânio Panga				    *
 * DATA:	05/04/2025				    *
 * **********************************************************/

#include <stdio.h>

int	main(void)
{
	float	sal;

	printf("informe o seu salário: ");
	scanf("%f", &sal);
	if (sal < 100000)
		sal = sal + 1000;
	printf("Salário Final: %.2f\n", sal);
}
