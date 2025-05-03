/******************************************************
 * PROG0505.C:	Linha de asteriscos		      *
 * AUTOR:	Fânio Panga			      *
 * DATA:	02/05/2025			      *
 * ****************************************************/

#include <stdio.h>

void	ft_linha(int nlinhas)
{
	int	i;

	i = 1;
	while (i <= nlinhas)
	{
		putchar('*');
		i++;
	}
	putchar('\n');
}

int	main(void)
{
	ft_linha(3);
	ft_linha(5);
	ft_linha(7);
	ft_linha(5);
	ft_linha(3);
}
