/******************************************************
 * PROG0504.C:	Linhas de caracteres		      *
 * AUTOR:	Fãnio Panga			      *
 * DATA:	02/05/2025			      *
 * ****************************************************/

#include <stdio.h>

void	ft_linha3x(void)
{
	int	i;

	i = 1;
	while (i <= 3)
	{
		putchar('*');
		i++;
	}
	putchar('\n');
}

void	ft_linha5x(void)
{
	int	i;

	i = 1;
	while (i <= 5)
	{
		putchar('*');
		i++;
	}
	putchar('\n');
}

void	ft_linha7x(void)
{
	int	i;

	i = 1;
	while (i <= 7)
	{
		putchar('*');
		i++;
	}
	putchar('\n');
}

int	main(void)
{
	ft_linha3x();
	ft_linha5x();
	ft_linha7x();
	ft_linha5x();
	ft_linha3x();
}
