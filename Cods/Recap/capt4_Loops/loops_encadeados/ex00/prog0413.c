/**********************************************************
 * PROG0413.C:	Sequencia numerica			  *
 * AUTOR:	Fânio Panga				  *
 * DATA:	16/04/2025				  *
 * ********************************************************/

#include <stdio.h>

int	main(void)
{
	int	i;
	int	j;

	i = 1;
	while (i <= 10)
	{
		j = 1;
		while (i >= j)
			printf("%d ", j++);
		putchar('\n');
		i++;
	}
}
