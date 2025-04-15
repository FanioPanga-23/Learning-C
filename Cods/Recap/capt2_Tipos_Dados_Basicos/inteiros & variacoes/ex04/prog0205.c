/*********************************************************
 * PROG0205.C:	Indicar o número de bytes dos tipos em C *
 * AUTOR:	Fânio Panga				 *
 * DATA:	02/04/2025				 *
 * *******************************************************/

#include <stdio.h>

int	main(void)
{
	printf("O tamanho em bytes do tipo char => %ld\n", sizeof(char));
	printf("O tamanjo em bytes do tipo int => %ld\n", sizeof(int));
	printf("O tamanho em bytes do tipo float => %ld\n", sizeof(float));
	printf("O tamanho em byes do tipo double => %ld\n", sizeof(double));
}
