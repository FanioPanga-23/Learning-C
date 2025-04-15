#include <stdio.h>
#define N 5

void	ft_tabuada_n5(void)
{
	int	i;

	i = 1;
	while (i <= 10)
	{
		printf("%2d X %2d = %2d\n", N, i, (N * i));
		i++;
	}
}

int	main(void)
{
	ft_tabuada_n5();
	return (0);
}
