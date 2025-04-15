/************************************************************
 * PROG0302.C:	Verifica se um valor é + ou -		    *
 * AUTOR:	Fânio Panga				    *
 * DATA:	05/04/2025				    *
 * **********************************************************/

#include <stdio.h>

int	main(void)
{
	int	num;

	printf("Digite um numero: ");
	scanf("%d", &num);
	if (num >= 0)
		printf("O número %d é Positivo!\n", num);
	else
		printf("O número %d é Negativo!\n", num);
}
