#include <stdio.h>

int	ft_double(int nb)
{
	return (nb * 2);
}

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

int	ft_is_special(int x)
{
	return (ft_double(x) == ft_pot(x, 2));
}
