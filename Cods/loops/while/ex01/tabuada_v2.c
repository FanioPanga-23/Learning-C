#include <stdio.h>
#define C 12
void	ft_tabuada(int nb)
{
	int	i;

	i = 1;
	while (i <= C)
	{
		printf("%2d X %2d = %2d\n", nb, i, (nb * i));
		i++;
	}
}

int	main(void)
{
	ft_tabuada(3);
}
