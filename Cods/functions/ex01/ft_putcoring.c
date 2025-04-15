#include <unistd.h>
#define N 20
#define CH "*"

void	ft_putcoringa(void)
{
	int	i;

	i = 1;
	while (i <= N)
	{
		write(1, CH, 1);
		i++;
	}
	write(1, "\n", 2);
}

int	main(void)
{
	ft_putcoringa();
}
