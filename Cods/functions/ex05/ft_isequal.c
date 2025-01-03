#include <stdio.h>

int	ft_is_equals(int nb1, int nb2);

int	main(void)
{
	int	nb1;
	int	nb2;

	printf("Type tow numbers:\n");
	scanf("%d %d", &nb1, &nb2);
	printf("%2d\n", ft_is_equals(nb1, nb2));
}

int	ft_is_equals(int nb1, int nb2)
{
	return (nb1 == nb2);
}
