/*************************************************************
 * PROG0309.C:	Aumento de ordenado			     *
 * AUTOR:	Fânio Panga				     *
 * DATA:	08/04/2025				     *
 * ***********************************************************/

#include <stdio.h>

int	main(void)
{
	float	salario;

	printf("Informe o seu salario: ");
	scanf("%f", &salario);
	if (salario > 1000)
		salario += (salario * 0.05);
	else
		salario += (salario * 0.07);
	printf("Novo salario: %.2f\n", salario);
}
