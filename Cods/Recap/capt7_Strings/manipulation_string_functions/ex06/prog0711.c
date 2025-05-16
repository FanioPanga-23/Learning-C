/********************************************************************************
 * PROG0711.C:	Devolve o numero de digitos existentes na string 's'		*
 * AUTOR:	Fânio Panga							*
 * DATA:	16/05/2025							*
 * ******************************************************************************/

int	ft_isDigit(char ch)
{
	return (ch >= 48 && ch <= 57);
}

int	ft_strcountd(char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (ft_isDigit(s[i]))
			count++;
		i++;
	}
	return (count);
}
