#include <stdio.h>
#define N 10

void	ft_pair_numbers(void)
{
	for (int i = 0; i <= N; i++)
	{
		if (i % 2 == 0)
			printf("%d\n", i);
		continue;
	}
}

int	main()
{
	ft_pair_numbers();
}
