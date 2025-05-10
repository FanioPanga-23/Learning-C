/********************************************************
 * PROG0509.C:	Is_digit				*
 * AUTOR:	Fânio Panga				*
 * DATA:	04/05/2025				*
 * ******************************************************/

#include <stdio.h>

int	ft_x_digit(char ch)
{
	return (ch >= '0' && ch <= '9');
}

int	main(void)
{
	char	ch;

	while (1)
	{
		printf("Character: ");
		scanf(" %c", &ch);
		if ( !ft_x_digit(ch) )
			putchar(ch);
	}
}
