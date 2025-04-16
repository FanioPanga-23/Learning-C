/************************************************************************
 * PROG0408.C:	5 primeiras tabuadas com paragem			*
 * AUTOR:	Fânio Panga						*
 * DATA:	15/04/2025						*
 * **********************************************************************/

#include <stdio.h>

int	main(void)
{
	int	i;
	int	j;

	i = 1;
	while (i <= 5)
	{
		j = 1;
		while (j <= 10)
		{
			printf("%2d * %2d = %2d\n", i, j, (i * j));
			j++;
		}
		if (i != 5)
		{
			printf("Press <<ENTER>> to continue..\n");
			getchar();
		}
		i++;
	}
}
