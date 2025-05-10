#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void	ft_startRandom()
{
	long	ultime;

	time(&ultime);
	srand((unsigned) ultime);
}

int	ft_random(int start, int end)
{
	int	i;
	int	ale;

	ale = (start + rand() % end);
	return (ale);
}

int	main(void)
{
	int	i;

	ft_startRandom();
	i = 1;
	while (i <= 5)
	{
		printf("%d\n", ft_random(1, 6));
		i++;
	}
}
