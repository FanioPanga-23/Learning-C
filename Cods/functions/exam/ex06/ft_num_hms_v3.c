#include <stdio.h>

long int	ft_num_hms(int n_horas, char tipo)
{
	long int	answer;

	switch (tipo)
	{
		case 'h':
		case 'H':
			answer = n_horas;
			break;
		case 'm':
		case 'M':
			answer = (n_horas * 60);
			break;
		case 's':
		case 'S':
			answer = (n_horas * 3600);
			break;
		default:
			answer = 0;
	}
	return (answer);
}
