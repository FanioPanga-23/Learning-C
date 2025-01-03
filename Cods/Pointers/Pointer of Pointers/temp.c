#include <stdio.h>

int	main(void)
{
	int	x;
	int	*ptr_x;
	int	**ptr_ptr_x;

	x = 123;
	ptr_x = &x;
	ptr_ptr_x = &ptr_x;
	printf("%d %d %d\n", x+1, (*ptr_x)+1, (**ptr_ptr_x)-1);
	printf("%ld\t %ld\t %ld\n", (long)&x, (long)ptr_x, (long)**ptr_ptr_x);
}
