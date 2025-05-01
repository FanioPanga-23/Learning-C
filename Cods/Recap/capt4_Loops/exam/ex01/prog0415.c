/**********************************************************
 * PROG0415.C:	Sequencia crescente e decrescente	  *
 * AUTOR:	Fânio Panga				  *
 * DATA:	16/04/2025				  *
 * ********************************************************/

#include <stdio.h>

int	main(void)
{
	int	i;
	int	j;
	int	num;

	printf("======== SEQUENCIA CRESCENTE E DECRESCENTE  ========\n\n");
	printf("Digite um inteiro: ");
	scanf("%d", &num);
	i = num;
	j = 1;
	while (i >= 1)
		printf("%2d  %2d\n", j++, i--);
}
