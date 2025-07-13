#include <stdio.h>

int	main(void)
{
	int	n;
	int	vl;

	printf("Digite um número: ");
	//vl = scanf("%d", &n);
	//printf("Variaveis lidas: %d\n", vl);
	//printf("Valor inserido: %d\n", n);
	//Garantindo apenas a leitura de inteiros:
	while (scanf("%d", &n) == 0)
		while (getchar() != '\n');
	printf("Inteiro lido: %d\n", n);
}
