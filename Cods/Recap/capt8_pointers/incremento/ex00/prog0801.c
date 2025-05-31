/********************************************************************************
 * PROG0801.C:	Incremento de ponteiro						*
 * AUTOR:	Fânio Panga							*
 * DATA:	29/05/2025							*
 * ******************************************************************************/

#include <stdio.h>

int	main(void)
{
	int	x;
	int	*px;
	float	y;
	float	*py;

	x = 5;
	px = &x;
	y = 5.0;
	py = &y;
	printf("X -> %d, Address -> %ld\n", x, (long int) px);
	printf("Y -> %f, Address -> %ld\n", y, (long int) py);
	printf("Incrementados: \nX -> %d, Address -> %ld\n", x+1, (long int) (px+1));
	printf("Y -> %f, Address -> %ld\n", y+1, (long int) (py+2));
}
