#include <stdio.h>
const char CH = '*';

void	ft_halph_christmas_tree(int nb)
{
	int	i;
	int	j;

	i = 1;
	while (i <= nb)
	{
		j = 1;
		while (j <= i)
		{
			printf("%c", CH);
			j++;
		}
		putchar('\n');
		i++;
	}
}

int	main(void)
{
	int	nb;

	printf("Type a number: ");
	scanf("%d", &nb);
	ft_halph_christmas_tree(nb);
}
