/************************************************************************
 * PROG0404.C:	Tabuada de um numero inserido				*
 * AUTOR:	Fânio Panga						*
 * DATA:	15/04/2025						*
 * **********************************************************************/

#include <stdio.h>

int	main(void)
{
	int	num;
	int	i;

	i = 1;
	printf("======== TABUADA ========\n\n");
	printf("Digite um inteiro: ");
	scanf("%d", &num);
	while (i <= 10)
	{
		printf("%2d * %2d = %2d\n", num, i, (i * num));
		i++;
	}
}
