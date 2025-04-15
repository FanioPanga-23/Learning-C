/************************************************************
 * PROG0215.C:	Mostrar parte inteira e fracionária	    *
 * AUTOR:	Fânio Panga				    *
 * DATA:	05/04/2025				    *
 ************************************************************/

#include <stdio.h>

int	main(void)
{
	float	num;

	printf("Digite um número fracionário: ");
	scanf("%f", &num);
	printf("Parte inteira: %d\nParte Fracionária: %.2f\n", (int)num, num - ((int)num));
}
