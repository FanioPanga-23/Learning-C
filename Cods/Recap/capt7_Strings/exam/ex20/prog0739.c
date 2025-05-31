/********************************************************************************
 * PROG0739.C:	Recebe uma string e devolve o inteiro que nela esta representado*
 * AUTOR:	Fânio Panga							*
 * DATA:	22/05/2025							*
 * ******************************************************************************/

int	ft_isDigit(char ch)
{
	return (ch >= 48 && ch <= 57);
}

int	ft_atoi(char *s)
{
	int	i;
	int	sinal;
	int	result;

	sinal = 1;
	i = 0;
	if (s[0] == 43 || s[0] == 45)
		i++;
	if (s[0] == 45)
		sinal = -1;
	while (ft_isDigit(s[i]))
	{
		result = result * 10 + s[i] - '0';
		i++;
	}
	return (sinal * result);
}
