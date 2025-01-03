#include <stdio.h>

long int	ft_num_hms(int n_horas, char tipo)
{
	if (tipo == 'h' || tipo == 'H')
		return (n_horas);
	else
		if (tipo == 'm' || tipo == 'M')
			return (n_horas * 60);
		else
			if (tipo == 's' || tipo == 'S')
				return (n_horas * 3600);
			else
				return(0);
}
