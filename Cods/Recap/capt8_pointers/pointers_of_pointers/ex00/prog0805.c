#include <stdio.h>

int	main(void)
{
	int	x;
	int	*ptr_x;
	int	**ptr_ptr_x;

	x = 5;
	ptr_x = &x;
	ptr_ptr_x = &ptr_x;
	printf("X => %d, &X => %p\n", x, &x);
	printf("X => %d, &X => %p\n", *ptr_x, ptr_x);
	printf("X => %d, &X => %p\n", **ptr_ptr_x, *ptr_ptr_x);
}
