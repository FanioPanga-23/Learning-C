/********************************************************
 * PROG0607.C:	ft_max maior valor no vetor				*
 * AUTOR:	Fânio Panga									*
 * DATA:	08/05/2025									*
 * ******************************************************/

#include <stdio.h>

float	ft_max(float v[], int n)
{
	float	maxV;
	int	i;

	i = 0;
	maxV = v[0];
	while (i < n)
	{
		if (v[i] > maxV)
			maxV = v[i];
		i++;
	}
	return (maxV);
}