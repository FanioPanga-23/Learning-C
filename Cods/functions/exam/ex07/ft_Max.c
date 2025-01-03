#include <stdio.h>

float	ft_Max(float x, float y, float w)
{
	if (x >= y && x >= w)
		return (x);
	else
		if (y >= w)
			return (y);
		else
			return (w);
}
