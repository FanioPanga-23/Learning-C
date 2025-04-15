#include <stdio.h>

int	main()
{
	float	sal;
	float	imposto;

	printf("Digite um salario: ");
	scanf("%f", &sal);
	if (sal < 1000)
		imposto = 0.05;
	else
		if ((sal >= 1000) && (sal < 5000))
			imposto = 0.11;
		else
			imposto = 0.35;
	printf("Salario bruto: %.2f\nSalario liquido: %.2f\nImposto: %.2f\n", sal, (sal - (sal * imposto)), (sal * imposto));
}
