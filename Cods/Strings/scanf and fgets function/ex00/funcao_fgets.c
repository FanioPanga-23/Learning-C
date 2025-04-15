#include <stdio.h>

int	main(void)
{
	char	Nome[50];

	printf("Introduza o Nome Completo: ");
	fgets(Nome, 50, stdin); /*ou fgets(Nome, sizeof(Nome), stdin);*/
	printf("Nome Completo: %s\n", Nome);
	return (0);
}
