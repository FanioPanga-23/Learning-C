/************************************************************
 * PROG0301.C:	Realizar operations relacionais sobre 2 int *
 * AUTOR:	Fânio Panga				    *
 * DATA:	04/05/2025				    *
 * **********************************************************/

#include <stdio.h>

int	main(void)
{
	int	n1;
	int	n2;

	printf("Digite dois valores inteiros: ");
	scanf("%d %d", &n1, &n2);
	printf("%d == %d?\t=> %d\n",n1, n2, (n1 == n2));
	printf("%d >  %d?\t=> %d\n", n1, n2, (n1 > n2));
	printf("%d >= %d?\t=> %d\n", n1, n2, n1 >= n2);
	printf("%d <  %d?\t=> %d\n", n1, n2, n1 < n2);
	printf("%d <= %d?\t=> %d\n", n1, n2, n1 <= n2);
	printf("%d != %d?\t=> %d\n", n1, n2, n1 != n2);
}
