#include <stdio.h>

void	ft_n_natural_nb(int nb)
{
	int	soma;
	int	produto;

	produto = 1;
	for (int i = 1; i <= nb; i++)
	{
		soma += i;
		produto *= i;
	}
	printf("Soma: %d\nProduto: %d\n", soma, produto);
}

int	main()
{
	ft_n_natural_nb(5);
}
