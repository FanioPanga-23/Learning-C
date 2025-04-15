#include <stdio.h>

int	main(void)
{
	int	n = 12;
	int	*ptr_n;
	int	**ptr_ptr;
	int	***ptr_x3;

	ptr_n = &n;
	ptr_ptr = &ptr_n;
	ptr_x3 = &ptr_ptr;
	printf("%d\n", *ptr_n);
	printf("%d\n", **ptr_ptr);
	printf("%d\n", ***ptr_x3);
}
