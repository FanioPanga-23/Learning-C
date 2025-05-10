/****************************************************************************************
 * PROG0603.C:	Iniciador com constantes						*
 * AUTOR:	Fânio Panga								*
 * DATA:	07/05/2025								*
 * **************************************************************************************/

#include <stdio.h>

#define	LENGTH 10

void	ft_iniciador(int vet[])
{
	int	i;

	i = 0;
	while (i < LENGTH)
		vet[i++] = 0;
}

void	ft_showVet(int vet[])
{
	int	i;

	i = 0;
	while (i < LENGTH)
		printf("%2d\n", vet[i++]);
}

int	main(void)
{
	int	vet[LENGTH];

	ft_iniciador(vet);
	ft_showVet(vet);
}
