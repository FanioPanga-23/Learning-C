/********************************************************
 * PROG0530.C:	Cubo					*
 * AUTOR:	Fânio Panga				*
 * DATA:	04/05/2025				*
 * ******************************************************/

#include <stdio.h>

int	ft_Cubo(int x)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	while (i <= 3)
	{
		res *= x;
		i++;
	}
	return (res);
}
