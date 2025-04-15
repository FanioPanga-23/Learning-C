/*************************************************************
 * PROG0207.C:	Calcula perimetro e area da circunferencia   *
 * AUTOR:	Fânio Panga				     *
 * DATA:	02/04/2025				     *
 * ***********************************************************/

#include <stdio.h>

int	main(void)
{
	float	raio;
	float	perimetro;
	double	Pi = 3.14159227;
	double	area;

	printf("Introduza o Raio da circunferência: ");
	scanf(" %f", &raio);
	area = Pi * raio * raio;
	perimetro = 2 * Pi * raio;
	printf("Área => %.2f\nPerímetro => %.2f\n", area, perimetro);
}
