#include <stdio.h>
const char CH = 'A';

void	ft_halph_christmas_tree_alph(int nb)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	k = CH;
	while (i <= nb)
	{
		j = 1;
		while (i >= j)
		{
			printf("%c", k);
			j++;
		}
		putchar('\n');
		k++;
		i++;
	}
}

int	main(void)
{
	int	nb;

	printf("Type a number: ");
	scanf("%d", &nb);
	ft_halph_christmas_tree_alph(nb);
}
