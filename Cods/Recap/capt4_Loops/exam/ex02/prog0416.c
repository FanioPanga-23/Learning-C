/**********************************************************
 * PROG0416.C:	Sequencia crescente e decrescente	  *
 * AUTOR:	Fânio Panga				  *
 * DATA:	16/04/2025				  *
 * ********************************************************/

#include <stdio.h>

int	main(void)
{
	int	i;
	int	j;

	printf("======== SEQUENCIA CRESCENTE/DECRESCENTE  ========\n\n");
	printf("Digite um numero: ");
	scanf("%d", &i);
	j = 1;
	while (i >= 1)
		printf("%2d  %2d\n", j++, i--);
}
