#include <stdio.h>
#define N 10

void	ft_put_nb(void)
{
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= i; j++)
			printf("%d", j);
		putchar('\n');
	}
}

int	main(void)
{
	ft_put_nb();
}
