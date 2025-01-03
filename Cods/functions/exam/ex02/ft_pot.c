#include <stdio.h>

float	ft_pot(float base, int pot)
{
	int	i;
	float	pow;

	i = 1;
	pow = 1.0;
	while (i <= pot)
	{
		pow *= base;
		i++;
	}
	return (pow);
}

int	main(void)
{
	float	base;
	int	pot;

	printf("Type a base: ");
	scanf("%f", &base);
	printf("Type a pot: ");
	scanf(" %d", &pot);
	printf("%.2f pot %2d = %.2f\n", base, pot, ft_pot(base, pot));
	return (0);
}
