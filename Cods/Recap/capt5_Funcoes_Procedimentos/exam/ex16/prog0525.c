/********************************************************
 * PROG0525.C:	To Lower case				*
 * AUTOR:	Fânio Panga				*
 * DATA:	04/05/2025				*
 * ******************************************************/

#include <stdio.h>

int	ft_isupper(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

char	ft_tolower(char ch)
{
	if (ft_isupper(ch))
		ch += 32;
	return (ch);
}
