/*****************************************************
 * PROG0423.C:	Meia arvore de natal		     *
 * AUTOR:	Fânio Panga			     *
 * DATA:	02/05/2025			     *
 * ***************************************************/

#include <stdio.h>

int	main(void)
{
	int	i;
	int	j;
	int	nRamos;

	printf("======== MEIA ARVORE DE NATAL  ========\n\n");
	printf("Nº de Ramos: ");
	scanf("%d", &nRamos);
	putchar('\n');
	i = 1;
	while (i <= nRamos)
	{
		j = 1;
		while (j <= i)
		{
			putchar('*');
			j++;
		}
		putchar('\n');
		i++;
	}
}
