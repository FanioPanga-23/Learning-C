#include <stdio.h>

int	main(void)
{
	char	nome[100];
	int	i;

	while (1)
	{
		printf("Introduza o Nome Completo: ");
		fgets(nome, 100, stdin);
		if (nome[0] == '\0')
			break;
		else
			printf("Nome Introduzido: %s\n", nome);
	}
}
