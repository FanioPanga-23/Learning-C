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
	int	j;
	int	k;

	j = 10;
	k = 22;
	printf("Antes da troca: j = %2d, k = %2d\n", j, k);
	ft_troca(&j, &k);
	printf("Depois da troca: j = %2d, k = %2d\n", j, k);
}
