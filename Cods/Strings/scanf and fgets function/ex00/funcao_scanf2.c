#include <stdio.h>

int	main(void)
{
	char	nome[50];

	printf("Introduza o Nome Completo: ");
	scanf("%s",nome);/*Scanf le apenas uma palavra e torna-se ineficaz para este caso*/
	printf("Nome Completo: %s\n",nome);
	return (0);
}
