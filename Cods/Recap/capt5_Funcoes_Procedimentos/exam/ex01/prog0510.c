/********************************************************
 * PROG0510.C:	x_toupper				*
 * AUTOR:	Fânio Panga				*
 * DATA:	04/05/2025				*
 * ******************************************************/

#include <stdio.h>

char	ft_x_toupper(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
		ch += 'a' - 'A';
	return (ch);
}

int	main(void)
{
	char	ch;

	printf("Char: ");
	scanf(" %c", &ch);
	printf("%c\n", ft_x_toupper(ch));
}
