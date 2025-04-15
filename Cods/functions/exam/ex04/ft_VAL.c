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

float	ft_VAL(float x, int n, float t)
{
	float	val;
	int	i;

	i = 1;
	val = 0;
	while (i <= n)
	{
		val += (x / (ft_pot(1 + t, i)));
		i++;
	}
	return (val);
}
