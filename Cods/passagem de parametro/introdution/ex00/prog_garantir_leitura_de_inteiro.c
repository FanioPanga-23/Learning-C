#include <stdio.h>

int	main(void)
{
	int	n;

	printf("Introduza um Nnumero inteiro: ");
	while (scanf("%d", &n) == 0)
		while (getchar() != '\n');
	printf("Valor digitado: %d\n", n);
}
