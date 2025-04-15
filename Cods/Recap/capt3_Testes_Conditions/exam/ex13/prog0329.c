/************************************************************
 * PROG0327.C:	Num dias em Fevereiro com switch sem break  *
 * AUTOR:	Fânio Panga				    *
 * DATA:	15/04/2025				    *
 * **********************************************************/

#include <stdio.h>

int	main(void)
{
	int	ano;
	int	is_b;
	int	fev;

	fev = 28;
	printf("======== DIAS EM FEVEREIRO  ========\n\n");
	printf("Ano: ");
	scanf("%d", &ano);
	is_b = ( (ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0 )?1:0;
	switch(is_b)
	{
		case 1:
			fev++;
		case 0:
			printf("Fevereiro => %d dias\n", fev);
	}
}
