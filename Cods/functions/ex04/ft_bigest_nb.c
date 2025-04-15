#include <stdio.h>

int	ft_bigger_nb(int nb1, int nb2)
{
	if (nb1 < nb2)
		return (nb2);
	return (nb1);
}

int	main(void)
{
	int	nb1;
	int	nb2;

	printf("Type tow numbers: \n");
	scanf("%d %d", &nb1, &nb2);
	printf("Bigger %d\n", ft_bigger_nb(nb1, nb2));
}
