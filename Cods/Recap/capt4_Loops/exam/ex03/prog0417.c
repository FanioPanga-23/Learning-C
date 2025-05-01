/**********************************************************
 * PROG0417.C:	Preencher linhas com char		  *
 * AUTOR:	Fânio Panga				  *
 * DATA:	16/04/2025				  *
 * ********************************************************/

#include <stdio.h>

int	main(void)
{
	char	ch;
	int	lines;
	int	i;
	int	j;

	printf("======== PREENCHER LINHAS COM CARACTERES  ========\n\n");
	printf("Digite um Num: ");
	scanf(" %d", &lines);
	printf("Digite um caractere: ");
	scanf(" %c", &ch);
	i = 1;
	while (lines >= i)
	{
		j = 1;
		while (j <= lines)
		{
			printf("%c", ch);
			j++;
		}
		putchar('\n');
		i++;
	}
}
