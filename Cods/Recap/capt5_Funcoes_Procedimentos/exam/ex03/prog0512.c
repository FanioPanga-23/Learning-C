/********************************************************
 * PROG0512.C:	Valor absoluto				*
 * AUTOOR:	Fânio Panga				*
 * DATA:	04/05/2025				*
 * ******************************************************/

#include <stdio.h>

int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (nbr * (-1));
	return (nbr);
}
