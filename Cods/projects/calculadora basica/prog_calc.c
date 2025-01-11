#include <stdio.h>
#include <stdlib.h>
#define SAIR 5

/*Essa função apresenta simplesmente o menu de opções da calculadora*/
int	ft_menu()
{
	int	opt;

	putchar('\n');
	puts("Escolha uma opção:\n");
	printf("1. Soma\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\n");
	printf("\nOpção: ");
	scanf("%d", &opt);
	putchar('\n');
	return (opt);
}

/*Função 'SOMA', soma 2 números passados como parâmetro*/
float	ft_soma(float n1, float n2)
{
	return (n1 + n2);
}

/*
 * Função 'Subtração', como o nome indica, ela faz a subtração de 2 números
 * passados como parâmetro
 * */
float	ft_sub(float n1, float n2)
{
	return (n1 - n2);
}

/*Função 'Multiplicação', multiplica 2 números passados como parâmetro*/
float	ft_mult(float n1, float n2)
{
	return(n1 * n2);
}

/*Função 'Divisão', faz a divisao entre 2 valores passados como parâmetro*/
float	ft_div(float n1, float n2)
{
	return (n1 / n2);
}

/*
 * Serve para levar o usuário a decidir o que fazer após uma operação 
 *(Continuar ou Terminar a execução)
 * */
int	ft_decisao()
{
	int	d;

	while (1)
	{
		printf("\n\n>> Deseja Continuar? <<\n");
		printf("\n1. CONTINUAR\n2. SAIR\n");
		printf("Decisão: ");
		scanf("%d", &d);
		if (d == 1 || d == 2)
			break;
	}
	return (d);
}

int	main(void)
{
	float	n1;
	float	n2;
	float	opt;
	float	dc;

	puts("\n\t\t======== Bem -vindo à Calculadora Simples! ========");
	do
	{
		opt = ft_menu();
		if (opt > 0 && opt < 5)
		{
			printf("Digite o primeiro número: ");
			scanf("%f", &n1);
			printf("Digite o segundo número: ");
			scanf("%f", &n2);
			switch (opt)
			{
				case 1:
					printf("Resultado: %d + %d = %d\n", (int)n1, (int)n2, ft_soma((int)n1, (int)n2));
					break;
				case 2:
					printf("Resultado: %d - %d = %d\n", (int)n1, (int)n2, ft_sub((int)n1, (int)n2));
					break;
				case 3:
					printf("Resultado: %d X %d = %d\n", (int)n1, (int)n2, ft_mult((int)n1, (int)n2));
					break;
				case 4:
					while ((int)n2 == 0)
					{
						printf("\nERRO: divisor igual à 0. Digite outro valor para o divisor: ");
						scanf("%f", &n2);
					}
					printf("Resultado: %.1f / %.1f = %.2f\n", n1, n2, ft_div(n1, n2));
					break;
			}
			dc = ft_decisao();
			if (dc == 2)
			{
				printf("\nEncerrando...\n");
				break;
			}
		}
		else
			if (opt < 1 || opt > 5)
			{
				printf("Opção inválida. Tente Novamente!\n");
				continue ;
			}
		else
			printf("\nEncerrando o programa...\n");
	} while (opt != SAIR);
}
