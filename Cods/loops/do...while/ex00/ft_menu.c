#include <stdio.h>

void	ft_menu(void)
{
	int	option;

	option = 0;
	do
	{
		printf("\t\t\t\t========== MENU ==========\n");
		printf("\n\n\t1- CLientes");
		printf("\n\n\t2- Fornecedores");
		printf("\n\n\t3- Encomendas");
		printf("\n\n\t4- Sair\n");
		printf("\n\n\tOption ");
		scanf("%d", &option);
		fflush(stdin);
		switch (option)
		{
			case 1:
				printf("\n\n\tOption Clientes\n\n");
				break;
			case 2:
				printf("\n\n\tOption Fornecedores\n\n");
				break;
			case 3:
				printf("\n\n\tOption Encomendas\n\n");
				break;
			case 4:
				break;
			default:
				printf("\n\n\tInvalid Option!!\n\n");
		}
		getchar();
	}while (option != 4);
}

int	main(void)
{
	ft_menu();
}
