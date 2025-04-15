#include <stdio.h>

int	ft_isdigit(char ch)
{
	return (ch >= '0' && ch <= '9');
}

int	ft_atoi(char *s)
{
	int	i;
	int	sinal;
	int	res;

	i = 0;
	sinal = 1;
	if (s[0] == '-' || s[0] == '+')
		i = 1;
	if (s[0] == '-')
		sinal = - 1;
	while (ft_isdigit(s[i]) != 0)
	{
		res = res * 10 + s[i] - '0';
		i++;
	}
	return (res*sinal);
}
