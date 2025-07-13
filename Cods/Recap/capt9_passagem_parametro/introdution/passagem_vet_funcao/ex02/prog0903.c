#include <stdio.h>

void	ft_calc(float *v, int num, float *xmin, float *xmax)
{
	int	i;

	i = 0;
	*xmax = *xmin = *v;
	while (i < num)
	{
		if (v[i] > *xmax)
			*xmax = v[i];
		if (v[i] < *xmin)
			*xmin = v[i];
		i++;
	}
}

int	main(void)
{
	float	v[] = {10, 22, 45, 8, 6, 17, 5};
	float	maior;
	float	menor;

	ft_calc(v, 7, &menor, &maior);
	printf("Heigher element: %.2f\nShorter element: %.2f\n", maior, menor);
}
