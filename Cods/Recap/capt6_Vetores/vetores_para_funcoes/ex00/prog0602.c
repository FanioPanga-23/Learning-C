/****************************************************************************************
 * PROG0602.C:	Iniciador de vetor							*
 * AUTOR:	Fânio Panga								*
 * DATA:	07/05/2025								*
 * **************************************************************************************/

#include <stdio.h>

void	ft_iniciador(int vet[], int length)
{
	int	i;

	i = 0;
	while (i < length)
		vet[i++] = 0;
}
