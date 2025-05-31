/********************************************************************************
 * PROG0744.C:	Verifica se a str tem altern um alpha seguido por um digito	*
 * AUTOR:	Fânio Panga							*
 * DATA:	22/05/2025							*
 * ******************************************************************************/

int	ft_isDigit(char ch)
{
	return (ch >= '0' && ch <= '9');
}

int	ft_isPair(int nb)
{
	return (nb % 2 == 0);
}

int	ft_Is_Alfa_Digit(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (ft_isPair(i) && !ft_isDigit(s[i]) ||
				!ft_isPair(i) && ft_isDigit(s[i]))
		{
			i++;
			continue;
		}
		else
			return (0);
		i++;
	}
	return (1);
}
