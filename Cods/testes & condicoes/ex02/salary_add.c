#include <stdio.h>

float	salary_add(float sal)
{
	if (sal < 100000)
		return (sal += 1000);
	return (sal);
}

int	main()
{
	float	sal;

	printf("Type your salary: ");
	scanf("%f", &sal);
	printf("Salario $%.2f\n", salary_add(sal));
	return (0);
}
