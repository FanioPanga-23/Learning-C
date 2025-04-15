#include <stdio.h>
const int N = 1;

void	ft_print_sequence(int nb)
{
	int	i;

	i = N;
	while (i <= nb)
	{
		printf("%d\t%d\n", i, (nb + 1) - i);
		i++;
	}
}

int	main(void)
{
	int	nb;

	printf("Type a number: ");
	scanf("%d", &nb);
	ft_print_sequence(nb);
}
