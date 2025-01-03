#include <stdio.h>

int	main(void)
{
	char	nome[50];
	char	Sobrenome[50];

	printf("Introduza o Nome: ");
	scanf("%s", nome);
	printf("Introduza o Sobrenome: ");
	scanf("%s", Sobrenome);
	printf("Nome: %s, Sobrenome: %s\n", nome, Sobrenome);
	return (0);
}
