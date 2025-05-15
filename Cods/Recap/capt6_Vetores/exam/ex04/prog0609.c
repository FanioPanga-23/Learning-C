/********************************************************
 * PROG0609.C:	Jogo da Velha				*
 * AUTOR:	Fânio Panga				*
 * DATA:	11/05/2025				*
 * ******************************************************/

#include <stdio.h>
#include <stdlib.h>
#define	DIM 3
#define SPACE ' '
#define BOLA 'O'
#define	X 'X'

/*Conta o tamanho de qualquer string*/
int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*Faz a limpeza do buffer*/
void	ft_clearBuffer(void)
{
	char	ch;

	while ((ch = getchar() != '\n') && ch != EOF)
		;
}

/*Mensagem com o titulo do jogo*/
void	ft_gameTitle(void)
{
	printf("======== JOGO DA VELHA ========\n\n");
}

/*Pede uma confirmacao para iniciar o jogo*/
void	ft_startConfirm(void)
{
	ft_clearBuffer();
	printf("\nPressione ENTER para iniciar o jogo...");
	getchar();
}

/*Verifica se um caractere pertence ao alfabeto*/
int	ft_isAlpha(char ch)
{
	return (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z');
}

/*Verifica se um valor e par*/
int	ft_isPair(int nb)
{
	return (nb % 2 == 0);
}

/*Verifica se um valor esta no limite [1-3]*/
int	ft_isOnLimite(int nb)
{
	return (nb >= 1 && nb <= 3);
}

/*Verifica o nome insirido, so aceita caracteres do alfabeto*/
int	ft_checkName(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if ( ! ft_isAlpha(s[i]) )
			return (0);
		i++;
	}
	return (1);
}

/*Mensagem de erro quando o padrao do nome do jogador estiver errado*/
void	ft_ERROR_PlName(void)
{
	puts("ERRO: O nome deve conter apenas caracteres do alfabeto!!");
	return ;
}

void	ft_ERROR_value(void)
{
	printf("ERRO: valor inválido\n");
	return ;
}

/*Verifica se os nomes dos jogadores sao iguais*/
int	ft_sameName(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s2[i] != '\0')
	{
		if (s1[i] != s2[j])
			return (0);
		i++;
		j++;
	}
	return (1);
}

/*Adiciona um digito no final do nome do Player2 quando os
 * nomes forem iguais*/
void	*ft_addDif(char *s)
{
	int	length;

	length = ft_strlen(s);
	s[length] = '1';
	s[length+1] = '\0';
}

/*Manda uma mensagem informando que sera necessario os 
 * nomes dos jogadores*/
void	ft_msgBGName()
{
	printf("Inserir nome\n");
	printf("Pressione ENTER..");
	getchar();
	return ;
}

/*Faz a leitura dos nomes dos jogadores*/
void	*ft_getPlayerName(char *player1, char *player2)
{
	int	cont;

	cont = 1;
	while (1)
	{
		printf("\nJogador %d: ", cont);
		scanf("%s", player1);
		if ( ! ft_checkName(player1) )
		{
			ft_ERROR_PlName();
			ft_clearBuffer();
			continue;
		}
		else
		{
			while (1)
			{
				printf("Jogador %d: ", cont + 1);
				scanf("%s", player2);
				if ( ! ft_checkName(player2) )
				{
					ft_ERROR_PlName();
					ft_clearBuffer();
					continue;
				}
				else
				{
					if (ft_sameName(player1, player2))
						ft_addDif(player2);
					break;
				}
			}
			break;
		}
	}
}

/*Inicia o tabuleiro*/
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
			v[i][j] = SPACE;
			j++;
		}
		i++;
	}
}

/*Mostra o tabuleiro*/
void	ft_showTab(char v[DIM][DIM])
{
	int	i;
	int	j;

	i = 0;
	putchar('\n');
	puts("  1 2 3");
	while (i < DIM)
	{
		j = 0;
		printf("%d ", i+1);
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
			printf("\n\n");
		i++;
	}
}

/*Verifica se o tabuleiro esta cheio*/
int	ft_isFull(char v[DIM][DIM])
{
	int	i;
	int	j;

	i = 0;
	while (i < DIM)
	{
		j = 0;
		while (j < DIM)
		{
			if (v[i][j] == SPACE)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

/*Verifica situacao de vitoria*/
int	ft_checkWin(char v[DIM][DIM])
{
	/*Colunas*/
	if ( (v[0][0] == X && v[1][0] == X && v[2][0] == X) || (v[0][0] == BOLA && v[1][0] == BOLA && v[2][0] == BOLA))
		return (1);
	if ( (v[0][1] == X && v[1][1] == X && v[2][1] == X) || (v[0][1] == BOLA && v[1][1] == BOLA && v[2][1] == BOLA))
		return (1);
	if ( (v[0][2] == X && v[1][2] == X && v[2][2] == X) || (v[0][2] == BOLA && v[1][2] == BOLA && v[2][2] == BOLA))
		return (1);
	/*Linhas*/
	if ( (v[0][0] == X && v[0][1] == X && v[0][2] == X) || (v[0][0] == BOLA && v[0][1] == BOLA && v[0][2] == BOLA))
		return (1);
	if ( (v[1][0] == X && v[1][1] == X && v[1][2] == X) || (v[1][0] == BOLA && v[1][1] == BOLA && v[1][2] == BOLA))
		return (1);
	if ( (v[2][0] == X && v[2][1] == X && v[2][2] == X) || (v[2][0] == BOLA && v[2][1] == BOLA && v[2][2] == BOLA))
		return (1);
	/*Diagonais*/
	if ( (v[0][0] == X && v[1][1] == X && v[2][2] == X) || (v[0][0] == BOLA && v[1][1] == BOLA && v[2][2] == BOLA))
		return (1);
	if ( (v[0][2] == X && v[1][1] == X && v[2][0] == X) || (v[0][2] == BOLA && v[1][1] == BOLA && v[2][0] == BOLA))
		return (1);
	return (0);
}

/*Verifica situacao de empate*/
int	ft_checkDraw(char v[DIM][DIM])
{
	return ( ft_isFull(v) && !(ft_checkWin(v)) );
}

/*Verifica se a posicao escolhida esta ocupada*/
int	ft_isFited(char v[DIM][DIM], int lin, int col)
{
	lin--;
	col--;
	return (v[lin][col] != SPACE);
}

/*Mensagem de erro para posicao ocupada*/
void	ft_ERROR_posFited(void)
{
	printf("ERRO: posição ocupada!!\n");
}

/*Preenche o tabuleiro com na posicao insirida pelo jogador*/
void	ft_fillTab(char v[DIM][DIM], int lin, int col, char ch)
{
	v[lin-1][col-1] = ch;
	return ;
}

void	ft_getPosition(char v[DIM][DIM], int *posV, int *posH)
{
	while (1)
	{
		printf("VERTICAL: ");
		if ( (! scanf("%d", posV)) || (!ft_isOnLimite(*posV)) )
		{
			ft_clearBuffer();
			ft_ERROR_value();
			putchar('\n');
			continue ;
		}
		else
		{
			while (1)
			{
				printf("\nHORIZONTAL: ");
				if ( (! scanf("%d", posH)) || (!ft_isOnLimite(*posH)) )
				{
					ft_clearBuffer();
					ft_ERROR_value();
					putchar('\n');
					continue ;
				}
				else
					break ;
			}
		}
		if (ft_isFited(v, *posV, *posH))
		{
			ft_ERROR_posFited();
			ft_clearBuffer();
			putchar('\n');
			continue ;
		}
		return ;
	}
}

int	main(void)
{
	char	tabuleiro[DIM][DIM];
	char	player1[20] = "";
	char	player2[20] = "";
	int	posV;
	int	posH;
	int	n_jogada;
	int	win;
	int	draw;

	ft_gameTitle();
	ft_msgBGName();
	ft_getPlayerName(player1, player2);
	ft_startConfirm();
	ft_startTab(tabuleiro);
	ft_showTab(tabuleiro);
	n_jogada = 1;
	while (1)
	{
		printf("Jogada Nº%d -> %s\n", n_jogada, (ft_isPair(n_jogada) ? player2 : player1) );
		ft_getPosition(tabuleiro, &posV, &posH);
		ft_fillTab(tabuleiro, posV, posH, (ft_isPair(n_jogada) ? BOLA : X));
		if (ft_checkWin(tabuleiro))
		{
			system("clear");
			printf("FIM DO JOGO.  PLACAR: VITORIA -> \"%s\"\n", ft_isPair(n_jogada) ? player2: player1);
			ft_showTab(tabuleiro);
			break;
		}
		else
			if (ft_checkDraw(tabuleiro))
			{
				system("clear");
				printf("FIM DO JOGO.\nPLACAR: EMPATE!!");
				ft_showTab(tabuleiro);
				break;
			}
		system("clear");
		ft_showTab(tabuleiro);
		n_jogada++;
	}
}
