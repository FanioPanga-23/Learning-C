/********************************************************
 * PROG0526.C:	To upper case				*
 * AUTOR:	Fânio Panga				*
 * DATA:	04/05/2025				*
 * ******************************************************/

#include <stdio.h>

int	ft_islower(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

char	ft_toupper(char ch)
{
	if (ft_islower(ch))
		ch -= 32;
	return (ch);
}
