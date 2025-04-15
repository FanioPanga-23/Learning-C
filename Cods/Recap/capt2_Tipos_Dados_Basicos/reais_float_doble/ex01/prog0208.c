/********************************************************
 * PROG0208.C:	Conversão: tonelada para quilo e grama  *
 * AUTOR:	Fânio Panga				*
 * DATA:	03/04/2025				*
 * ******************************************************/

#include <stdio.h>

int	main(void)
{
	double	gramas;
	float	quilos;
	float	n_toneladas;
	double	total_g;
	double	total_q;

	gramas = 1.0e6;
	quilos = 1.0E3;
	printf("Quantas toneladas comprou: ");
	scanf(" %f", &n_toneladas);
	total_g = n_toneladas * gramas;
	total_q = n_toneladas * quilos;
	printf("Nº de gramas => %f => %e\n", total_g, total_g);
	printf("Nº de Quilos => %f => %E\n", total_q, total_q);
	/*%e e %E, têm apenas diferença na forma com os mesmos serão representados: 134.45E+5 e 134.45e+5*/
}
