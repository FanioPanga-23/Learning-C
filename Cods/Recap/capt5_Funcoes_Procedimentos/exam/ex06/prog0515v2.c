/********************************************************
 * PROG0515.C:	H/M/S					*
 * AUTOR:	Fânio Panga				*
 * DATA:	04/05/2025				*
 * ******************************************************/

#include <stdio.h>

long int	ft_num(int n_horas, char tipo)
{
	long int	res;
	int	h;
	int	m;
	int	s;

	m = 60;
	s = 3600;
	if (n_horas <= 0)
		return (0);
	switch (tipo)
	{
		case 'h':
		case 'H':
			res = n_horas;
			break;
		case 'm':
		case 'M':
			res = (m * n_horas);
			break;
		case 's':
		case 'S':
			res = (n_horas* s);
			break;
		default:
			res = 0;
	}
	return (res);
}
