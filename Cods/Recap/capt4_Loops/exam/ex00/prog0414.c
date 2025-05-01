/***********************************************************
 * PROG0414.C:	Escrever toda tabela ASCII		   *
 * AUTOR:	Fânio Panga				   *
 * DATA:	16/04/2025				   *
 * *********************************************************/

#include <stdio.h>

int	main(void)
{
	int	i;

	i = 0;
	while (i <= 255)
		printf("%3d => %c\n", i, (char)i++);
}
