#include <stdio.h>
#define DIM 3

void	ft_start_table(char mat[][DIM])
{
	int	i;
	int	j;

	i = 0;
	while (i < DIM)
	{
		j = 0;
		while (j < DIM)
		{
			mat[i][j] = ' ';
			j++;
		}
		i++;
	}
}

void	ft_fill_mat(char mat[][DIM])
{
	mat[0][0] = 'X';
	mat[0][2] = 'O';
	mat[1][1] = 'X';
	mat[2][2] = 'O';
}

void	ft_print_table(char mat[][DIM])
{
	int	i;
	int	j;

	i = 0;
	while (i < DIM)
	{
		j = 0;
		while (j < DIM)
		{
			printf(" %c %c", mat[i][j], j == DIM - 1? ' ' : '|');
			j++;
		}
		if (!(i == DIM - 1))
			printf("\n___________\n");
		else
			putchar('\n');
		i++;
	}
}

int	main(void)
{
	char	velha[DIM][DIM];

	ft_start_table(velha);
	ft_fill_mat(velha);
	ft_print_table(velha);
}
