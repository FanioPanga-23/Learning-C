/****************************************************************
 * PROG0214.C:	Conversão de segundos em horas e minutos	*
 * AUTOR:	Fânio Panga					*
 * DATA:	04/04/2025					*
 * **************************************************************/

#include <stdio.h>

int	main(void)
{
	int	segundos;

	printf("Introduza um número de segundos: ");
	scanf("%d", &segundos);
	printf("Horas	: %d\n", (segundos / 3600));
	printf("Minutos : %d\n", (segundos % 3600 / 60));
	printf("Segundos: %d\n", (segundos % 60));
}
