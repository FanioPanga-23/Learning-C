/*****************************************************
 * PROG0503.C:	Linha de 20 asterisco		     *
 * AUTOR:	Fânio Panga			     *
 * DATA:	02/05/2025			     *
 * ***************************************************/

#include <stdio.h>

void	ft_linha(void)
{
	int	i;

	i = 1;
	while (i <= 20)
	{
		putchar('*');
		i++;
	}
	putchar('\n');
}

int	main(void)
{
	int	i;

	ft_linha();
	printf("Numeros entre 1 e 5\n");
	ft_linha();
	i = 1;
	while (i <= 5)
		printf("%d\n", i++);
	ft_linha();
}
