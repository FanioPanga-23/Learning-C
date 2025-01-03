#include <stdio.h>

void	ft_asc_nbr(void)
{
	int	nb;

	while (1)
	{
		printf("Type a number: ");
		scanf("%d", &nb);
		if (nb >= 1 && nb <= 100)
			return;
	}
}

int	main(void)
{
	ft_asc_nbr();
}
