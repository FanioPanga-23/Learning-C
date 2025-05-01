/********************************************************
 * PROG0422.C:	write with While			*
 * AUTOR:	Fânio Panga				*
 * DATA:	28/04/2025				*
 * ******************************************************/

#include <stdio.h>

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 20)
	{
		if (i == 10)
		{
			i++;
			continue;
		}
		else
			printf("%2d\n", i++);
	}
}
