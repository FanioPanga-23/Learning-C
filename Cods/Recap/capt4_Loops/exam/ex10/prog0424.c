/******************************************************
 * PROG0424.C:	Meia arvore de natal com letras M     *
 * AUTOR:	Fânio Panga			      *
 * DATA:	02/05/2025			      *
 * ****************************************************/

#include <stdio.h>

int	main(void)
{
	int	i;
	int	j;
	int	nRamos;
	char	ch;

	printf("======== Meia Arvore de Natal Com Letras M  ========\n\n");
	printf("Nº de Ramos: ");
	scanf("%d", &nRamos);
	i = 1;
	ch = 'A';
	while (i <= nRamos)
	{
		j = 1;
		while (j <= i)
		{
			printf("%c", ch);
			j++;
		}
		putchar('\n');
		i++;
		ch++;
	}
}
