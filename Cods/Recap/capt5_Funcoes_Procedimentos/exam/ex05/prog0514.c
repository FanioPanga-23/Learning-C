/********************************************************
 * PROG0514.C:	Numero de segundos			*
 * AUTOR:	Fânio Panga				*
 * DATA:	04/05/2025				*
 * ******************************************************/

long int	ft_n_segundos(int n_horas)
{
	if (n_horas > 0)
		return ((n_horas * 60) * 60);
	return (0);
}
