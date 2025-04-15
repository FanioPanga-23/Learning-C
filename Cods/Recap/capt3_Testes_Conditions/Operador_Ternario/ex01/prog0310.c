/***********************************************************
 * PROG0310.C:	Aumento de ordenado com operador ternario  *
 * AUTOR:	Fânio Panga				   *
 * DATA:	08/04/2025				   *
 * *********************************************************/

#include <stdio.h>

int	main(void)
{
	float	salario;

	printf("Informe o seu salario: ");
	scanf("%f", &salario);
	salario = salario > 1000? salario * 1.05: salario * 1.07;
	printf("Novo salario: %.2f\n", salario);
}
