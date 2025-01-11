#include <stdio.h>
#define SAIR 3
#define OFSET 32

int	ft_menu()
{
	int	opcao;

	printf("\nEscolha uma opção: \n");
	printf("\n1. Converter de Celsius para Fahrenheit\n2. Converter de Fahrenheit para Celsius\n3. Sair\n");
	printf("\nOpção: ");
	scanf("%d", &opcao);
	return (opcao);
}

/* 
 * Converte temperatura (passada como parâmetro) de 
 * Celsius para Fahrenheit e retorna a temperatura em Fahrenheit
 * */
float	ft_cel_to_fah(float temp)
{
	float	fah;

	return (fah = (temp * 9/5) + OFSET);
}


/*
 * Converte temperatura (passada como parâmetro) de 
 * Fahrenheit para Celsius e retorna a temperatura em Celsius
 * */
float	ft_fah_to_cel(float temp)
{
	float	cel;

	return (cel = (temp - OFSET) * 5/9);
}

/*
 * Questiona ao usuário se desaja continuar ou encerrar a 
 * execusão do programa
 * */
int	ft_continue_out(void)
{
	int	decision;
	while(1)
	{
		printf("\nDeseja fazer outra conversão?");
		printf("\n1. Sim\n2. Não\n");
		printf("\nEscolha: ");
		scanf("%d", &decision);
		if (decision  == 1 || decision == 2)
			return (decision);
	}
}

int	main(void)
{
	float	temp;
	int	opcao;

	printf("\n\t\t======== Bem-Vindo ao Conversor de Temperatura ========\n");
	do
	{
		opcao = ft_menu();
		if (opcao > 0 && opcao < 3)
		{
			switch (opcao)
			{
				case 1:
					printf("\nDigite a temperatura em Celsius: ");
					scanf("%f", &temp);
					printf("Conversão: %.2f°C equivale a %.2f°F\n", temp, ft_cel_to_fah(temp));
					break;
				case 2:
					printf("\nDigite a temperatura em Fahrenheit: ");
					scanf("%f", &temp);
					printf("Conversão: %.2f°F equivale a %.2f°C\n", temp, ft_fah_to_cel(temp));
					break;
			}
			if (ft_continue_out() == 2)
			{
				printf ("\nEncerrando...\n");
				break ;
			}
			else
				continue ;

		}
		else
			if (opcao < 1 || opcao > 3)
				printf("\nOpção inválida. Tente novamente...\n");
			else
				printf("\nEncerrando o programa...\n");
	} while (opcao != SAIR);
}
