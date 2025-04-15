#include <stdio.h>
#define N 12
#define N2 5

void	ft_tabuada_first_5nb(void)
{
	int	i;
	int	j;

	i = 1;
	while (i <= N2)
	{
		j = 1;
		while (j <= 12)
		{
			printf("%2d X %2d = %2d\n", i, j, (i * j));
			j++;
		}
		putchar('\n');
		i++;
	}
}

int	main(void)
{
	ft_tabuada_first_5nb();
}
