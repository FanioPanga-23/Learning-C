#include <stdio.h>

void	ft_troca(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(void)
{
	int	x;
	int	y;

	printf("Type tow integer: ");
	while (scanf("%d %d", &x, &y) == 0)
		while (getchar() != '\n');
	printf("Readed values: x => %d   y => %d\n", x, y);
	printf("Before change: x = %d  y = %d\n", x, y);
	ft_troca(&x, &y);
	printf("After change: x = %d, y = %d\n", x, y);
	return (0);
}
