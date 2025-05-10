/********************************************************
 * PROG0511.C:	ft_Pot					*
 * AUTOR:	Fânio Panga				*
 * DATA:	04/05/2025				*
 * ******************************************************/

#include <stdio.h>

float	ft_Pot(float x, int n)
{
	int	i;
	float	pot;

	i = 1;
	pot = 1.0;
	while (i <= n)
	{
		pot *= x;
		i++;
	}
	return (pot);
}

int	main(void)
{
	int	exp;
	float	base;

	printf("%.2f\n", ft_Pot(2, 3));
}
