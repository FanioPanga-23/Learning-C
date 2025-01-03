#include <stdio.h>
#define N 10

int	main(void)
{
	float	vet[N];
	int	i;

	i = 0;
	while (i < N)
	{
		vet[i] = (i * (N - 1));
		i++;
	}
	i = 0;
	while (i < N)
	{
		printf("%f\n", vet[N - 1]);
		i++;
	}
}
