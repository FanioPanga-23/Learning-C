/************************************************************************
 * PROG0409.C:	Menu de opcoes						*
 * AUTOR:	Fânio Panga						*
 * DATA:	15/04/2025						*
 * **********************************************************************/

#include <stdio.h>

int	main(void)
{
	int	opt;

	printf("======== MENU PRINCIPAL  ========\n\n");
	do
	{
		while (1)
		{
			printf("1- CLientes\n2- Fornecedores\n3- Encomendas\n4- Sair\n");
			scanf("%d", &opt);
			if (opt >= 1 && opt <= 4)
				break;
			printf("ERRO:	Opcao invalida!!\n");
		}
		switch(opt)
		{
			case 1:
				printf("\nOPCAO:	<<Clientes>>\n");
				break;
			case 2:
				printf("\nOPCAO:	<<Fornecedores>>\n");
				break;
			case 3:
				printf("\nOPCAO:	<<Encomendas>>\n");
				break;
			case 4:
				printf("\nSaindo..\n");
		}

	}while (opt != 4);
}
