/********************************************************
 * PROG0601.C:	Salario mensal				*
 * AUTOR:	Fânio Panga				*
 * DATA:	06/05/2025				*
 * ******************************************************/

#include <stdio.h>

int	main(void)
{
	float	salario[12];
	float	total_anual;
	int	i;

	total_anual = 0.0;
	i = 1;
	while (i <= 12)
	{
		printf("Informe o salario do %dº mes: ", i);
		scanf(" %f", &salario[i++]);
	}
	i = 1;
	puts("\nMes\tValor");
	while (i <= 12)
	{
		printf("%d\t%.2f\n", i, salario[i]);
		total_anual += salario[i++];
	}
	printf("TOTAL ANUAL -> %.2f\n", total_anual);
}
