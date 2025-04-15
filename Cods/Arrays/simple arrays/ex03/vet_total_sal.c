#include <stdio.h>

int	main(void)
{
	float	salario[12];
	int	i;
	float	total;

	i = 0;
	total = 0;
	while (i <= 11)
	{
		printf("Type the %dth month salary: ", (i + 1));
		scanf("%f", &salario[i]);
		total += salario[i];
		i++;
	}
	printf("Month\t\tValue\n");
	i = 0;
	while (i < 12)
	{
		printf("%3d\t\t%3.2f\n", (i + 1), salario[i]);
		i++;
	}
	printf("Anual: %.2f\n", total);
}
