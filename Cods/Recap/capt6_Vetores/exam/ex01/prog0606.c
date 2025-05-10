/********************************************************
 * PROG0606.C:	ft_memset				*
 * AUTOR:	Fânio Panga				*
 * DATA:	08/05/2025				*
 * ******************************************************/

#include <stdio.h>

char	* ft_memset(char v[], char ch, int n)
{
	int	i;

	i = 0;
	while (i < n)
		v[i++] = ch;
	return (v);
}
