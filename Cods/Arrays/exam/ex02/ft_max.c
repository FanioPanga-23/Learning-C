#include <stdio.h>
#define	MAX 10

float	ft_max(float v[], int nb)
{
	int	i;
	int	j;
	float	tmp;

	i = 0;
	while (i < nb)
	{
		j = i + 1;
		while (j < nb)
		{
			if (v[i] < v[j])
			{
				tmp = v[i];
				v[i] = v[j];
				v[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
/*
 * TESTE
int	main(void)
{
	float	flo_vet[MAX] = {10, 5, 14, 8, 4, 3, 7};
	int	i;

	ft_max(flo_vet, 7);
	i = 0;
	while (i < 7)
	{
		printf("%.2f\n", flo_vet[i]);
		i++;
	}
}
*/
