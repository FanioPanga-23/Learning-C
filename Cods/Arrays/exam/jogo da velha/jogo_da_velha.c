#include <stdio.h>
#include <stdlib.h>
#define DIM 3
#define SPACE ' '
#define P1C 'X'
#define P2C 'O'

void	ft_header(void)
{
	printf("\n\t============ JOGO DA VELHA ============\n");
	return ;
}

/* This function init the board with charactere ' '*/
void	ft_init_table(char table[DIM][DIM])
{
	int	i;
	int	j;

	i = 0;
	while (i < DIM)
	{
		j = 0;
		while (j < DIM)
		{
			table[i][j] = SPACE;
			j++;
		}
		i++;
	}
}

/*
 * PEDE O NOME DOS JOGADORES
 */
void	ft_player_name(char player[2])
{
	int	i;
	char	check;

	putchar('\n');
	i = 0;
	while (i < 2)
	{
		printf("Player %d: ", i + 1);
		scanf(" %c" ,&check);
		if ((check >= 'a' && check <= 'z') || (check >= 'A' && check <= 'Z'))
		{
			player[i] = check;
			i++;
		}
	}
	putchar('\n');
}

/*
 * IMPRIME A SITUACAO DO TABULEIRO
 */
void	ft_print_board_status(char board[DIM][DIM])
{
	int	i;
	int	j;

	puts("\n    1   2   3\n");
	i = 0;
	while (i < DIM)
	{
		printf("%d  ", (i + 1));
		j = 0;
		while (j < DIM)
		{
			printf(" %c %c", board[i][j], j == DIM - 1? ' ' : '|');
			j++;
		}
		if (i != DIM - 1)
			puts("\n   ___________");
		putchar('\n');
		i++;
	}
	putchar('\n');
}

/*
 * VERIFICA SE A POSICAO A SER PREENCHIDA ESTA VAZIA
 */
int	ft_isFree(char board[DIM][DIM], int h, int v)
{
	return (board[h - 1][v - 1] == 32);
}

/*
 * VERIFICA SE AS POSICOES PASSADAS SAO VALIDAS (NUMEROS)
 */
int	ft_isNum(int nb)
{
	return (nb >= 0 && nb <= 9);
}

/*
 * VERIFICA TODOS OS CASOS POSSIVEIS DE VITORIA
 */
char	ft_winCheck(char board[DIM][DIM])
{
	/*
	 * VERIFICACAO DE LINHAS
	 */
	if (board[0][0] == board[0][1] && board[0][1] == board[0][2])
		return (board[0][0]);
	if (board[1][0] == board[1][1] && board[1][1] == board[1][2])
		return (board[1][0]);
	if (board[2][0] == board[2][1] && board[2][1] == board[2][2])
		return (board[2][0]);

	/*
	 * VERIFICACAO DE COLUNAS
	 */
	if (board[0][0] == board[1][0] && board[1][0] == board[2][0])
		return (board[0][0]);
	if (board[0][1] == board[1][1] && board[1][1] == board[2][1])
		return (board[0][1]);
	if (board[0][2] == board[1][2] && board[1][2] == board[2][2])
		return (board[0][2]);

	/*
	 * VERIFICACAO DE DIAGONAIS
	 */
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
		return (board[0][0]);
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
		return (board[0][2]);
	return ('0');
}

/*
 * VERIFICA SITUACOES DE EMPATE
 */
int	ft_drawCheck(char board[DIM][DIM])
{
	int	i;
	int	j;

	i = 0;
	while (i < DIM)
	{
		j = 0;
		while (j < DIM)
		{
			if (board[i][j] == 32)
				return (0);
			j++;
		}
		i++;
	}
	printf("\n\t>>>>>>>> FIM DO JOGO <<<<<<<<\n");
	printf("\t\tEMPATE\n");
	return (1);
}

/*
 * RETORNA O VENCEDOR E POSITIVO PARA O TERMINO DO JOGO
 */
int	ft_endGame(char player[2], char playchar)
{
	if (playchar == P1C)
	{
		printf("\n\t>>>>>>>> FIM DO JOGO <<<<<<<<\n");
		printf("\t\tVENCEDOR: '%c'\n", player[0]);
		putchar('\n');
		return (1);
	}
	else
		if (playchar == P2C)
		{
			printf("\n\t>>>>>>>> FIM DO JOGO >>>>>>>>\n");
			printf("\t\tVENCEDOR: '%c'\n", player[1]);
			putchar('\n');
			return (1);
		}
	return (0);
}

/*
 * ADICIONA CADA JOGADA NO TABULEIRO, COM TODOS OS TESTES NECESSARIOS
 */
int	ft_put(char board[DIM][DIM], int h, int v, int pN)
{
	if (ft_isNum(h) != 0 && ft_isNum(v) != 0)
	{
		if (pN == 0)
		{
			switch (ft_isFree(board, h, v))
			{
				case 1:
					board[h - 1][v - 1] = P1C;
					return (1);
				default:
					printf("POSICAO OCUPADA\n");
					return (0);
			}
		}
		else
			if (pN == 1)
			{
				switch(ft_isFree(board, h, v))
				{
					case 1:
						board[h - 1][v - 1] = P2C;
						return (1);
					default:
						printf("POSICAO OCUPADA\n");
						return (0);
				}
				board[h - 1][v - 1] = P2C;
			}
	}
	printf("POSICAO INVALIDA\n");
	return (0);
}

/*
 * RESPONSAVEL POR TODAS AS JOGADAS, E O CENTRO DO PROGRAMA
 */
void	ft_play(char board[DIM][DIM], char player[2])
{
	int	i;
	int	j;
	int	pH;
	int	pV;

	j = 0;
	i = 1;
	do
	{
		printf("TABULEIRO: \n");
		ft_print_board_status(board);
		if (ft_endGame(player, ft_winCheck(board)) == 1)
			return ;
		else
			if (ft_drawCheck(board) == 1)
				return ;
		printf("Player '%c':\n", player[j]);
		printf("Posicao H: ");
		scanf(" %d", &pH);
		printf("Posicao V: ");
		scanf(" %d", &pV);
		if (ft_put(board, pH, pV, j) != 0)
		{
			if (j == 1)
				j = 0;
			else
			{
				j++;
				i++;
			}
				
		}
		system("clear");
	}while (j != 3);
}

int	main(void)
{
	char	table[DIM][DIM];
	char	player[2];
	int	i;
	int	j;

	ft_init_table(table);
	ft_header();
	ft_player_name(player);
	ft_play(table, player);
	return (0);
}
