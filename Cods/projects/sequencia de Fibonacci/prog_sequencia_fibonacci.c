#include <stdio.h>
#define SAIR 2
#define NULLO 0

void	ft_boas_vindas(void)
{
	printf("\n\t\t======== Bem_vindo ao Gerador da Sequência de Fibonacci ========\n");
	return ;
}

void	ft_clear_buffer(void)
{
	while (getchar() != '\n');
	return ;
}

void	ft_ERROR_invalid_input(void)
{
	printf("\nERRO: Entrada inválida, tente novamente..!\n");
	return ;
}

void	ft_ERROR_gt_zero(void)
{
	printf("\nERRO: Valor de entrada deve ser maior que 0. Tente novamente..!\n");
	return ;
}

int	ft_user_input(void)
{
	long int	nb;

	while (1)
	{
		printf("\nDigite um número para sequência de Fibonacci: ");
		if (!(scanf("%ld", &nb)))
		{
			ft_clear_buffer();
			ft_ERROR_invalid_input();
		}
		else
			if (nb > NULLO)
				return (nb);
			else
			{
				ft_clear_buffer();
				ft_ERROR_gt_zero();
			}
	}
}

void	ft_Fibonacci(int lim)
{
	int	i;
	int	j;
	int	k;


	k = 1;
	i = 1;
	j = 0;
	while (lim >= k)
	{
		fb = i + j;
		printf("%d, ", );
	}
}

int	ft_continuar(void)
{
	int	nb;

	while (1)
	{
		printf("\nDeseja gera outra Sequẽncia?\n1. Sim\n2. Sair\n");
		printf("Opção: ");
		if (!(scanf("%d", &nb)))
		{
			ft_clear_buffer();
			ft_ERROR_invalid_input();
		}
		else
			if (nb == 1 || nb == 2)
				return (nb);
			else
			{
				ft_clear_buffer();
				ft_ERROR_invalid_input();
			}
	}
}

int	main(void)
{
	int	opt;
	int	vlim;

	do
	{
		ft_boas_vindas();
		vlim = ft_user_input();
		ft_Fibonacci(vlim);
		opt = ft_continuar();
	} while (opt != SAIR);
	printf("\nEncerrando..\n");
}
