#include <stdio.h>
#define N 12
#define N1 5

void	ft_tabuada_5nb()
{
	for (int i = 1; i <= N1; i++)
	{
		for (int j = 1; j <= N; j++)
			printf("%2d X %2d = %2d\n", i, j, (i * j));
		if (i != N1)
		{
			printf("\nPress <ENTER> to continue...");
			getchar();
		}
	}
}

int	main(void)
{
	ft_tabuada_5nb();
}
