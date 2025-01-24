#include <stdio.h>
#define SAIR 2

/* Função para mensagem de boas vindas */
void	ft_boas_vindas(void)
{
	printf("\n\t\t======== Bem-Vindo ao Gerador de Tabuada ========\n");
}

/* Função para limpeza do buffer e residual */
void	ft_clear_buffer(void)
{
	while (getchar() != '\n')
		;
	return ;
}

/* Imprimir mensagem de erro para opções inválidas */
void	ft_OPT_ERROR(void)
{
	printf("\nErro: Opção inválida. Tente novamente!\n");
	return ;
}

/* Imprimir mensagem de erro para valores inválidos */
void	ft_ERROR_invalid_val(void)
{
	printf("\nErro: Introduza um número válido!\n");
}

/* Função para inquerir um número para a tabuada a ser gerada */
int	ft_user_input(void)
{
	int	nb;

	while (1)
	{
		printf("\nDigite um número inteiro para ser gerada a sua tabuada: ");
		if (!(scanf("%d", &nb)))
		{
			ft_ERROR_invalid_val();
			ft_clear_buffer();
			continue ;
		}
		if (nb != 0)
			return (nb);
		else
		{
			printf("Erro: Insira um número diferente de 0!\n");
			ft_clear_buffer();
		}
	}
}

/* Função para inquerir um número para o limite da tabuada a ser apresentada */
int	ft_num_limit(void)
{
	int	nlim;

	while (1)
	{
		printf("Digite um inteiro para o limite da Tabuada: ");
		if(!(scanf("%d", &nlim))) /* Verifica se o valor inserido é um inteiro ou caractere */
		{
			ft_ERROR_invalid_val();
			ft_clear_buffer();
			continue ;
		}
		if (nlim >= 1)
			return (nlim);
		else
		{
			/* Para garantir que o valor limite nao seja < 1 */
			printf("\nErro: Número limite deve ser maior que 0!\n");
			ft_clear_buffer();
		}
	}
}

/* Função que ser para gerar a tabuada */
void	ft_gerar_tabuada(int nb, int limit)
{
	int	i;

	i = 1;
	if (nb > 0)
		printf("\nTABUADA DE %d ATÉ %d\n", nb, limit);
	else
		printf("\nTABUADA NEGATIVA DE %d ATÉ %d\n", nb, limit);
	while (i <= limit)
	{
		printf("%3d X %3d = %4d\n", nb, i, nb*i);
		i++;
	}
	return ;
}

/* Serve para inquerir o usuário sobre o próximo passo após a tabuada ser gerada */
int	ft_continuar(void)
{
	int	opt;

	while (1)
	{
		printf("\nGerar outra Tabuada?\n\n1. Sim\n2. Sair\n");
		printf("Opção: ");
		if (!(scanf("%d", &opt)))/* Verifica se o número inserido é um inteiro ou um caractere */
		{
			ft_OPT_ERROR();
			ft_clear_buffer();
			continue;
		}
		if (opt == 1 || opt == 2)
			return (opt);
		else
		{
			ft_OPT_ERROR();
			ft_clear_buffer();
		}
	}
}

int	main(void)
{
	int	ntab;
	int	opt;
	int	limit;

	ft_boas_vindas();
	do
	{
		ntab = ft_user_input();
		limit = ft_num_limit();
		ft_gerar_tabuada(ntab, limit);
		opt = ft_continuar();
	} while (opt != SAIR);
	printf("\nEncerrando..\n");
}
