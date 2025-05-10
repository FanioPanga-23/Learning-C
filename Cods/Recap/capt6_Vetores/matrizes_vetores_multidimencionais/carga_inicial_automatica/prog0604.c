/****************************************************************************************
 * PROG0604.C:	Tabuleiro jogo da velha							*
 * AUTOR:	Fânio Panga								*
 * DATA:	07/05/2025								*
 * **************************************************************************************/

#include <stdio.h>
#define	DIM 3


void	ft_showVet(char vet[DIM][DIM])
{
	int	i;
	int	j;

	i = 0;
	while (i < DIM)
	{
		j = 0;
		while (j < DIM)
		{
			if (j != DIM-1)
				printf("%c | ", vet[i][j]);
			else
				printf("%c", vet[i][j]);
			j++;
		}
		putchar('\n');
		if (i != DIM-1)
			printf("_ _ _ _ _\n");
		i++;
	}
}

int	main(void)
{
	char	velha[DIM][DIM] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };

	velha[0][0] = 'X';
	velha[0][2] = 'O';
	velha[1][1] = 'X';
	velha[2][2] = 'O';
	ft_showVet(velha);
}
