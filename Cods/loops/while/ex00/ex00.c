#include <stdio.h>

void	print_numbers(void)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
}

int	main(void)
{
	print_numbers();
	return (0);
}
