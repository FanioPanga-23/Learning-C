/************************************************************
 * PROG0307.C:	Salário bruto, líquido e imposto	    *
 * AUTOR:	Fânio Panga				    *
 * DATA:	07/04/2025				    *
 * **********************************************************/

#include <stdio.h>

int	main(void)
{
	float	salario;
	float	taxa;

	printf("Qual seu salário: ");
	scanf("%f", &salario);
	if (salario < 1000)
		taxa = (salario * 0.05);
	else
		if (salario >= 1000 && salario < 5000)
			taxa = (salario * 0.11);
		else
			if (salario >= 5000)
				taxa = (salario * 0.35);
	printf("Salário: %.2f\tLiquido: %.2f\tImposto: %.2f\n", salario, (salario - taxa), taxa);
}
