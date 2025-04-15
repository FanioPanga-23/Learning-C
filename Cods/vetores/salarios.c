#include <stdio.h>

int     main()
{
	int     i;
	float	total;
	float	sal [12];
	
	i = 0;
	while (i < 12)
	{
		printf("Introduza o salario do mes %d: ", (i+1));
		scanf("%f", &sal[i]);
		i++;
	}

	i = 0;
	while (i < 12)
	{
		printf("Mes %2d, Salario: \t%.2f\n", i+1, sal[i]);
		total += sal[i];
		i++;
	}
	printf("Total anual: \t%.2f\n", total);
}