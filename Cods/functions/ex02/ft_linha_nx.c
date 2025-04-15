#include <unistd.h>

void	ft_linha_nx(int nb, char ch)
{
	int	i;

	i = 1;
	while (i <= nb)
	{
		write(1, &ch, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_linha_nx(7, '*');
}
