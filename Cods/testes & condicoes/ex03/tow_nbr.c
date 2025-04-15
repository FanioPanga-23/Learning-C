#include <stdio.h>

int	order_nbr(int n1, int n2)
{
	int	tmp;

	if (n1 > n2)
	{
		tmp = n1;
		n1 = n2;
		n2 = tmp;
	}
	printf("%d, %d\n", n1, n2);
}

int	main()
{
	int	n1;
	int	n2;

	printf("Type tow numbers: ");
	scanf("%d", &n1);
	scanf(" %d", &n2);
	order_nbr(n1, n2);
	return (0);
}
