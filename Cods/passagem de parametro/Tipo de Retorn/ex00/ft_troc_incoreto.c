#include <stdio.h>

void	ft_troca(int j, int k)
{
	int	tmp;

	tmp = j;
	j = k;
	k = tmp;
}

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 22;
	printf("Antes da troca: a = %2d, b = %2d\n", a, b);
	ft_troca(a, b);
	printf("Depois da troca:  a = %2d, b = %2d\n", a, b);
}
