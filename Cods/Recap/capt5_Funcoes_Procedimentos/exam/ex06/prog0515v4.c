/********************************************************
 * PROG0515.C:	H/M/S com if_else			*
 * AUTOR:	Fânio Panga				*
 * DATA:	04/05/2025				*
 * ******************************************************/

long int	ft_num(int n_horas, char tipo)
{
	long int	res;
	int	m;
	int	s;

	m = 60;
	s = 3600;
	res = 1;
	if (n_horas <= 0)
		return(0);
	if (tipo == 's' || tipo == 'S')
		return (n_horas * s);
	else
		if (tipo == 'm' || tipo == 'M')
			return (n_horas * m);
		else
			if (tipo == 'h' || tipo == 'H')
				return (n_horas);
	return (0);
}
