#include <stdio.h>

int	main(void)
{
	int	y = 90;
	int	z = 8;
	int	x = 6;

	y = !x;
	printf("y -->%d\nx --> %d\n", y, x);
	z = (x == y);
	printf("%d\n", z);
	!z;
	z = x%8;
	printf("%d\n", z);
}
