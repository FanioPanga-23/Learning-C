/********************************************************
 * PROG0608.C:	Transpor uma matriz						*
 * AUTOR:	Fânio Panga									*
 * DATA:	09/05/2025									*
 * ******************************************************/

#include <stdio.h>
#define	MAX 3

void	ft_transpor(int v[MAX][MAX])
{
	int		i;
	int		j;
	int		t[MAX][MAX];

	i = 0;
	j = 0;
	while (i < MAX)
	{
		j = 0;
		while (j < MAX)
		{
			t[i][j] = v[j][i];
			j++;
		}
		i++;
	}
	i = 0;
	while (i < MAX)
	{
		j = 0;
		while (j < MAX)
		{
			v[i][j] = t[i][j];
			j++;
		}
		i++;
	}
}

/*int		main(void)
{
	int		v[MAX][MAX] = {{1, 2, 3}, {4, 5, 6},
	{7, 8, 9}};
	int		i;
	int		j;

	ft_transpor(v);
	i = 0;
	while (i < MAX)
	{
		j = 0;
		while (j < MAX)
		{
			printf("%2d, ", v[i][j]);
			j++;
		}
		putchar('\n');
		i++;
	}
}*/