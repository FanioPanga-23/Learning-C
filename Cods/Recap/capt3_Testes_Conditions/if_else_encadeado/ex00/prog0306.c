/************************************************************
 * PROG0306.C:	Imposto					    *
 * AUTOR:	Fânio Panga				    *
 * DATA:	07/04/2025				    *
 * **********************************************************/

#include <stdio.h>

int	main(void)
{
	double	salario;
	double	imposto;

	printf("Qual é o seu salário: ");
	scanf("%lf", &salario);
	if (salario <= 0)
		printf("Erro: Salário válido!!\n");
	else
		if (salario > 1000)
			printf("Imposto: %.2lf\n", ((salario * 10) / 100));
		else
			printf("Imposto: %.2lf\n", ((salario * 5) / 100));
}
