#include <stdio.h>

void	ft_skip_multi10_3(int nb)
{
	int	i;

	i = nb;
	while (i <= 20)
	{
		if (i % 10 == 0)
			break;
		else
			if ((i % 3 == 0))
			{
				i++;
				continue;
			}
		
		printf("%d\n", i);
		i++;
	}
}

int	main(void)
{
	int	nb;

	printf("Type a number: ");
	scanf("%d", &nb);
	ft_skip_multi10_3(nb);
	return (0);
}
