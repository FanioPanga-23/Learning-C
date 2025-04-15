/************************************************************
 * PROG0303.C:	Verifica se um number = 0		    *
 * AUTOR:	Fânio Panga				    *
 * DATA:	05/04/2025				    *
 * **********************************************************/

#include <stdio.h>

int	main(void)
{
	int	num;

	printf("Type any number: ");
	scanf("%d", &num);
	if (num == 0)
		printf("The number is Zero!\n");
	else
		printf("The number isn't Zero\n");
}
