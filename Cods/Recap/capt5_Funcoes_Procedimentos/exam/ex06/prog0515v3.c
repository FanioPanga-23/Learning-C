/********************************************************
 * PROG0515.C:	H/M/S com switch sem break		*
 * AUTOR:	Fânio Panga				*
 * DATA:	04/05/2025				*
 * ******************************************************/

#include <stdio.h>

long int	ft_num(int n_horas, char tipo)
{
	long int	res;
	int	m;
	int	s;

	m = 60;
	s = 60;
	res = 1;
	if (n_horas <= 0)
		return (0);
	switch (tipo)
	{
		case 's':
		case 'S':
			res *= s;
		case 'm':
		case 'M':
			res *= m;
		case 'h':
		case 'H':
			res *= n_horas;
	}
	return (res);
}
