#include <stdio.h>

int	main()
{
	int	n1;
	int	n2;

	printf("Digite um inteiro: \n");
	scanf("%d", &n1);
	scanf("%d", &n2);

	printf("Soma: %d + %d = %d\n", n1, n2, (n1 + n2));
	printf("Subtracao: %d - %d = %d\n", n1, n2, (n1 - n2));
	printf("Divisao: %d / %d = %d \n", n1, n2, (n1 / n2));
	printf("Multiplicacao %d X  %d = %d\n", n1, n2, (n1 * n2));
	return (0);
}
