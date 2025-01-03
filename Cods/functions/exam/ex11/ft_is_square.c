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

int	ft_is_square(int x, int y)
{
	return (x == ft_pot(y, 2));
}
