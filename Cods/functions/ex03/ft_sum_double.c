#include <stdio.h>

int	ft_sum(int nb1, int nb2)
{
	return (nb1 + nb2);
}

int	ft_double(int nb)
{
	return (nb * 2);
}

int	main(void)
{
	int	nb1;
	int	nb2;

	printf("Type tow numbers: ");
	scanf("%d %d", &nb1, &nb2);
	printf("Sum: %2d + %2d = %2d\nDouble %2d = %2d\nDouble %2d = %2d\n", nb1, nb2, ft_sum(nb1, nb2), nb1, ft_double(nb1), nb2, ft_double(nb2));
}
