#include <stdio.h>

long int	ft_num_hms(int n_horas, char tipo)
{
	switch (tipo)
	{
		case 'h':
		case 'H':
			return (n_horas);
		case 'm':
		case 'M':
			return (n_horas * 60);
		case 's':
		case 'S':
			return (n_horas * 3600);
		default:
			return (0);
	}
}
