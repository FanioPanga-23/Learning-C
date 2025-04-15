/************************************************************
 * PROG0317.C:	N segundos numa hora			    *
 * AUTOR:	Fânio Panga				    *
 * DATA:	09/04/2025				    *
 * **********************************************************/

#include <stdio.h>

int	main(void)
{
	int	n_horas;
	long	segundos;

	printf("Informe uma quantidade de horas: ");
	scanf("%d", &n_horas);
	segundos = n_horas > 0?n_horas * (long int) 3600: 0;
	printf("%d Horas tem: %ld Segundos\n", n_horas, segundos);
}
