/********************************************************
 * PROG0604.C:	Jogo da velha incompleto		*
 * AUTOR:	Fânio Panga				*
 * DATA:	07/05/2025				*
 * ******************************************************/

#include <stdio.h>
#define	SHAPE ' '
const	int	DIM = 3;

void	ft_iniciador(char velha[DIM][DIM])
{
	int	i;
	int	j;

	i = 0;
	while (i < DIM)
	{
		j = 0;
		while (j < DIM)
			velha[i][j++] = SHAPE;
		i++;
	}
}

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
				printf("%c|", vet[i][j]);
			else
				printf("%c", vet[i][j]);
			j++;
		}
		putchar('\n');
		if (i != DIM-1)
			printf("-----\n");
		i++;
	}
}

int	main(void)
{
	char	velha[DIM][DIM];
	char	ch;
	int	posiX;
	int	posiY;
	int	nJogadas;

	ch = 'O';
	nJogadas = 0;
	ft_iniciador(velha);
	while (1)
	{
		ft_showVet(velha);
		printf("Itroduza a posicao de Jogo (Linha & Coluna): ");
		scanf("%d %d", &posiY, &posiX);
		posiY--;
		posiX--;
		if (velha[posiY][posiX] == SHAPE)
		{
			velha[posiY][posiX] = ch = (ch == 'O')?'X':'O';
			nJogadas++;
		}
		else
			printf("Posicao ja ocupada\nJogue Novamente!!!\n");
		if (nJogadas == DIM*DIM)
			break;
	}
	ft_showVet(velha);
}
