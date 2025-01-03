#include <stdio.h>
#define DIM 3

void	ft_init_table(char mat[][DIM])
{
	int	i;
	int	j;

	while (i < DIM)
	{
		while (j < DIM)
		{
			mat[i][j] = ' ';
			j++;
		}
		i++;
	}
}

int	main()
{
	char	matrix[][DIM];
}
