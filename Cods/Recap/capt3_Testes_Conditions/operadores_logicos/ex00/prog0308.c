/************************************************************
 * PROG0308.C:	Taxa de imposto casados e solteiros	    *
 * AUTOR:	Fânio Panga				    *
 * DATA:	07/04/2025				    *
 * **********************************************************/

#include <stdio.h>

int	main(void)
{
	char	s_civil;
	float	salario;

	printf("Qual o seu estado civil?\n\nPressione 'S' para solteiro\nPressione 'C' para casado\n");
	s_civil = getchar();
	printf("Informe o seu salario: ");
	scanf("%f", &salario);
	if (s_civil == 'C' || s_civil == 'c')
		printf("Estado Civil: 'Casado'\tImposto: %.2f\n", (salario * 0.09));
	else
		if (s_civil == 'S' || s_civil == 's')
			printf("Estado civil: 'Solteiro'\tImposto: %.2f\n", (salario * 0.10));
		else
			printf("Estado Civil invalido..!!");
}
