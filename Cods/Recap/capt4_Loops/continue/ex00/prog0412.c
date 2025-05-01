/**********************************************************
 * PROG0412.C:	29 numeros pares			  *
 * AUTOR:	Fânio Panga				  *
 * DATA:	15/042025				  *
 * ********************************************************/

#include <stdio.h>

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i == 60)
			break;
		else
			if (i % 2 == 1)
			{
				i++;
				continue;
			}
			else
				printf("%2d\n", i);
		i++;
	}
	printf("FIM DO LOOP!!..\n");
}
