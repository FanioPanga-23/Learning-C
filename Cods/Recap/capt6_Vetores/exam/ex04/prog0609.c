/********************************************************
 * PROG0609.C:	Jogo da Velha				*
 * AUTOR:	Fânio Panga				*
 * DATA:	11/05/2025				*
 * ******************************************************/

#include <stdio.h>
#define	DIM 3
#define SPACE ' '
#define BOLA 'O'
#define	X 'X'

void	ft_startTab(char v[DIM][DIM])
{
	int	i;
	int	j;

	i = 0;
	while (i < DIM)
	{
		j = 0;
		while (j < DIM)
		{
			v[i][j] = BOLA;
			j++;
		}
		i++;
	}
}

void	ft_showTab(char v[DIM][DIM])
{
	int	i;
	int	j;

	i = 0;
	puts("  1 2 3");
	while (i < DIM)
	{
		j = 0;
		printf("%d ", j+1);
		while (j < DIM)
		{
			if (j != (DIM - 1))
				printf("%c|", v[i][j]);
			else
				putchar(v[i][j]);
			j++;
		}
		if (i != (DIM - 1))
			printf("\n  -----\n");
		else
			putchar('\n');
		i++;
	}
}

int	ft_checkWin(char v[DIM][DIM])
{
	int	retorno;

	retorno = 0;
	/*Primeira Linha*/
	if (v[0][0] == X && v[0][1] == X && v[0][2] == X)
		retorno++;
	if (v[0][0] == BOLA && v[0][1] == BOLA && v[0][2] == BOLA)
		retorno++;
	/*Segunda Linha*/
	if (v[1][0] == X && v[1][1] == X && v[1][2] == X)
		retorno++;
	if (v[1][0] == BOLA && v[1][1] == BOLA && v[1][2] == BOLA)
		retorno++;
	/*Terceira Linha*/
	if (v[2][0] == X && v[2][1] == X && v[2][2] == X)
		retorno++;
	if (v[2][0] == BOLA && v[2][1] == BOLA && v[2][2] == BOLA)
		retorno++;
	/*Primeria Coluna*/
	if (v[0][0] == X && v[1][0] == BOLA && v[2][0] == X)
		retorno++;
	if (v[0][0] == BOLA && v[1][0] == BOLA && v[2][0] == BOLA)
		retorno++;
	/*Segunda Coluna*/
	if (v[0][1] == X && v[1][1] == X && v[2][1] == X)
		retorno++;
	if (v[0][1] == BOLA && v[1][1] == BOLA && v[2][1] == BOLA)
		retorno++;
	/*Terceira Coluna*/
	if (v[0][2] == X && v[1][2] == X && v[2][2] == X)
		retorno++;
	if (v[0][2] == BOLA && v[1][2] == BOLA && v[2][2] == BOLA)
		retorno++;
	/*Diagonal Principal*/
	if (v[0][0] == X && v[1][1] == X && v[2][2] == X)
		retorno++;
	if (v[0][0] == BOLA && v[1][1] == BOLA && v[2][2] == BOLA)
		retorno++;
	/*Diagonal Secundaria*/
	if (v[0][2] == X && v[1][1] == X && v[2][0] == X)
		retorno++;
	if (v[0][2] == BOLA && v[1][1] == BOLA && v[2][0] == BOLA)
		retorno++;

	return (retorno);
}

int	main(void)
{
	char	tabuleiro[DIM][DIM];

	ft_startTab(tabuleiro);
	ft_showTab(tabuleiro);
}
