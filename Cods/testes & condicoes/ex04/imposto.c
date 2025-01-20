#include <stdio.h>

void	imposto(float sal)
{
	float	imposto;

	if (sal <= 0)
	{
		printf("Salario invalido!");
	}
	else
		if (sal > 1000)
			imposto = (sal * 10) / 100;
		else
			imposto = ((sal * 5) / 100);
	printf("Imposto a pagar: %.2f\n", imposto);
}

int	main()
{
	float	sal;

	printf("Digite um salario: ");
	scanf("%f", &sal);
	imposto(sal);
}
