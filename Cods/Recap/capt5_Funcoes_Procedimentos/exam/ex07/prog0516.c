/********************************************************
 * PROG0516.C:	Maior valor				*
 * AUTOR:	Fânio Panga				*
 * DATA:	04/05/2025				*
 * ******************************************************/

#include <stdio.h>

float	ft_Max(float x, float y, float w)
{
	if (x >= y && x >= w)
		return (x);
	else
		if (y >= x && y >= w)
			return (y);
		else
			return(w);
}
