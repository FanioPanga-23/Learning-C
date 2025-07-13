#include <stdio.h>

void	ft_troca(int a, int b)
{
	int	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

int	main(void)
{
	int	x;
	int	y;

	x = 22;
	y = 10;
	printf("Before change: x => %d  y => %d\n", x, y);
	ft_troca(x, y);
	printf("After change: x => %d  y => %d\n", x, y);
}
