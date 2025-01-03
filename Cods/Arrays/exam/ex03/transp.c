#include <stdio.h>
#define L 2
#define C 3

int	main(void)
{
	int	v[L][C] = {{1, 2, 3}, {4, 5, 6}};
	int	t[C][L];
	int	i;
	int	j;

	/*
	 * O truque usado no loop abaixo foi: verficar comparar o numero de l e c, 
	 * e usei o maior entre eles para aceder tanto as linhas quanto as colunas.
	 * */
	i = 0;
	while (i < C)
	{
		j = 0;
		while (j < C)
		{
			t[i][j] = v[j][i];
			j++;
		}
		i++;
	}
	/*
	 * Aqui acedi linhas e colunas da forma tradicional
	 * */
	i = 0;
	while (i < C)
	{
		j = 0;
		while (j < L)
		{
			printf("[%d] ", t[i][j]);
			j++;
		}
		putchar('\n');
		i++;
	}
}
