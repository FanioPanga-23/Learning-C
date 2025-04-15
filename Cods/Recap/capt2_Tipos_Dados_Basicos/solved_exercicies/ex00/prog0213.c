#include <stdio.h>

int	main(void)
{
	int	n1;
	int	n2;

	printf("Introduza dois inteiros: ");
	scanf(" %d %d", &n1, &n2);
	printf("%d + %d = %d\n", n1, n2, (n1 + n2));
	printf("%d - %d = %d\n", n1, n2, (n1 - n2));
	printf("%d * %d = %d\n", n1, n2, (n1 * n2));
	printf("%d / %d = %d\n", n1, n2, (n1 / n2));
	printf("%d %% %d = %d\n", n1, n2, (n1 % n2));
}
