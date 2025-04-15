/************************************************************
 * PROG0313.C:	Imposto pago por homens e mulheres	    *
 * AUTOR:	Fânio Panga				    *
 * DATA:	09/04/2025				    *
 * **********************************************************/

#include <stdio.h>

int	main(void)
{
	char	gen;
	float	sal;
	float	imposto;

	printf("Qual o seu genero: ");
	gen = getchar();
	printf("Qual o seu salario: ");
	scanf(" %f", &sal);
	switch (gen)
	{
		case 'm':
		case 'M':
			imposto = 0.15;
			break;
		case 'f':
		case 'F':
			imposto = 0.10;
			break;
	}
	printf("Imposto: %.2f\n", (sal * imposto));
}
