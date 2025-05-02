/******************************************************
 * PROG0427.C:	Tabela ASCII			      *
 * AUTOR:	Fânio Panga			      *
 * DATA:	02/05/2025			      *
 * ****************************************************/

#include <stdio.h>

int	main(void)
{
	int	i;
	int	n1;
	int	n2;
	int	stor;

	printf("======== TABELA ASCII ========\n\n");
	printf("Digite Dois Nº [0 - 255]: ");
	scanf("%d %d", &n1, &n2);
	if (n1 <= n2)
	{
		while (n1 <= n2)
		{
			printf("%2d --> %c\n", n1, (char)n1);
			n1++;
		}
	}
	else
		while (n1 >= n2)
		{
			printf("%d --> %c\n", n1, (char)n1);
			n1--;
		}
}
