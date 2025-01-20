#include <stdio.h>

int	is_zero(int nb)
{
	if (nb)
		return (1);
	return (0);
}

int	main()
{
	int	nb;

	printf("Type a number to check that it's zero (0) or not: ");
	scanf("%d", &nb);
	if (is_zero(nb) == 0)
		printf("Yea, it's zero (0)\n");
		else
			printf("%d Isn't zero (0)\n", nb);
}
