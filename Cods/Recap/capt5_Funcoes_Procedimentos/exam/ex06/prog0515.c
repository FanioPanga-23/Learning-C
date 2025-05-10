/********************************************************
 * PROG0515.C:	H/M/S					*
 * AUTOR:	Fânio Panga				*
 * DATA:	04/05/2025				*
 * ******************************************************/

#include <stdio.h>

long int	ft_num(int n_horas, char tipo)
{
	if (n_horas <= 0)
		return (0);
	switch (tipo)
	{
		case 'h':
		case 'H':
			return (n_horas);
		case 'm':
		case 'M':
			return(60 * n_horas);
		case 's':
		case 'S':
			return ((60 * n_horas) * 60);
		default:
			return (0);
	}
}
