/************************************************************
 * PROG0314.C	Imposto com switch sem break		    *
 * AUTOR:	Fânio Panga				    *
 * DATA:	09/04/2025				    *
 * **********************************************************/

#include <stdio.h>

int	main(void)
{
	char	gen;
	float	sal;
	float	imposto;

	imposto = 0;
	printf("Qual o seu genero: ");
	gen = getchar();
	printf("Qual o seu salario: ");
	scanf(" %f", &sal);
	switch (gen)
	{
		case 'm':
		case 'M':
			imposto += 0.05;
		case 'f':
		case 'F':
			imposto += 0.10;
	}
	printf("Imposto: %.2f\n", (sal * imposto));
}
