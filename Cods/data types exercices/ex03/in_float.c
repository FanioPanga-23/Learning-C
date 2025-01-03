#include <stdio.h>

int	main()
{
	float	n;

	printf("Digite um numero: ");
	scanf("%f", &n);
	printf("Parte inteira %d\nPonto Flutuante %.2f\n", (int) n, (n - ((int) n)));
	return (0);
}
