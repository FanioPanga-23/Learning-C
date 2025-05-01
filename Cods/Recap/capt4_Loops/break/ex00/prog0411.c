/**********************************************************
 * PROG0411.C:	30 numeros pares			  *
 * AUTOR:	Fânio Panga				  *
 * DATA:	16/04/2025				  *
 * ********************************************************/

#include <stdio.h>

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i == 30)
			break;
		else
			printf("%2d\n", i*2);
		i++;
	}
	puts("\nFIM DO LOOP!!..\n");
}
