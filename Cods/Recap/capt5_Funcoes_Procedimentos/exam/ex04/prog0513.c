/********************************************************
 * PROG0513.C:	VAL (Valor Atual Liquido)		*
 * AUTOR:	Fânio Panga				*
 * DATA:	04/05/2025				*
 * ******************************************************/

#include <stdio.h>

float	ft_pot(float x, int n)
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

float	ft_VAL(float x, int n, float t)
{
	int	i;
	float	val;

	i = 1;
	while (i <= n)
	{
		val += (x / ft_pot((1 + t), i));
		i++;
	}
	return(val);
}
