/********************************************************
 * PROG0609.C:	Jogo da Velha				*
 * AUTOR:	Fânio Panga				*
 * DATA:	11/05/2025				*
 * ******************************************************/

#include <stdio.h>
#include <unistd.h>
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

/*Mensagem com o titulo do jogo*/
void	ft_putGameName(void)
{
	printf("======== JOGO DA VELHA ========\n");
}

void	ft_clearBuffer(void)
{
	char	ch;

	while ((ch = getchar()) != '\n' && ch != EOF)
		;
	return ;
}

/*Verifica se um caractere pertence ao alfabeto*/
int	ft_isAlpha(char ch)
{
	return (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z');
}

/*Verifica o nome insirido, so aceita caracteres do alfabeto*/
int	ft_checkName(char *s)
{
	int	i;

	i = 1;
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

/*Verifica se os nomes dos jogadores sao iguais*/
int	ft_isTheSame(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s2[i] != '\0')
	{
		if (s1[i] != s1[j])
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
	int	i;
	int	length;

	length = ft_strlen(s);
	s[length] = '1';
	s[length+1] = '\0';
}

/*Faz a leitura dos nomes dos jogadores*/
void	*ft_getPlayerName(char *player1, char *player2)
{
	int	cont;

	cont = 1;
	while (1)
	{
		printf("Jogador %d: ", cont);
		scanf("%s", player1);
		if ( ! ft_checkName(player1) )
		{
			ft_ERROR_PlName();
			ft_clearBuffer();
			continue;
		}
		else
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
				if (ft_isTheSame(player1, player2))
					ft_addDif(player2);
				break;
			}
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

/*Verifica situacao de vitoria*/
int	ft_checkWin(char v[DIM][DIM])
{
	int	retorno;

	retorno = 0;
	/**/
	return (retorno);
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

int	main(void)
{
	char	tabuleiro[DIM][DIM];
	char	player1[20] = "";
	char	player2[20] = "";

	ft_startTab(tabuleiro);
	ft_showTab(tabuleiro);
	ft_getPlayerName(player1, player2);
	printf("Jogador 1 -> %s\nJogador 2 -> %s\n", player1, player2);
}
