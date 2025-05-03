/*******************************************************
 * PROG0506.C:	Linha de caracteres		       *
 * AUTOR:	Fãnio Panga			       *
 * DATA:	02/05/2025			       *
 * *****************************************************/

#include <stdio.h>

void	ft_linha(int nCh, char ch)
{
	int	i;

	i = 1;
	while (i <= nCh)
	{
		putchar(ch);
		i++;
	}
	putchar('\n');
}

int	main(void)
{
	ft_linha(3, '+');
	ft_linha(5, '+');
	ft_linha(7, '-');
	ft_linha(5, '*');
	ft_linha(3, '*');
}
