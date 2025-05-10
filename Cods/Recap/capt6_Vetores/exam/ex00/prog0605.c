/********************************************************
 * PROG0605.C:	Vetor inteiro = 10			*
 * AUTOR:	Fânio Panga				*
 * DATA:	08/09/2025				*
 * ******************************************************/

#include <stdio.h>
#define	N 10

int	main(void)
{
	float	vetInt[N];
	int	i;

	i = 0;
	while (i < N)
	{
		vetInt[i] = (i * (N - 1));
		i++;
	}
	i = 0;
	while (i < N)
		printf("%.2f\n", vetInt[i++]);
}
