#include <stdio.h>

void	ft_ascii_between_nbr(int nb1, int nb2)
{
	int	tmp;

	if (nb1 < 0 || nb1 > 255)
	{
		printf("Error. Check number and try again...\n");
		return ;
	}
	else
		if (nb2 < 0 || nb2 > 255)
		{
			printf("Error. Check number and try again...\n");
			return;
		}
	if (nb1 > nb2)
	{
		tmp = nb1;
		nb1 = nb2;
		nb2 = tmp;
	}
	while (nb1 <= nb2)
	{
		printf("%2d -> %c\n", nb1, (char) nb1);
		nb1++;
	}
}

int	main(void)
{
	int	nb1;
	int	nb2;

	printf("Type a number between 0...255: ");
	scanf("%d", &nb1);
	printf("Type another one between 0...255: ");
	scanf(" %d", &nb2);
	ft_ascii_between_nbr(nb1, nb2);
	return (0);
}
