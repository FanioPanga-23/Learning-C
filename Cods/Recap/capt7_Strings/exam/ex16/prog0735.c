/********************************************************************************
 * PROG0735.C:	Coloca os caracteres da string alternadamente em Mai e Min	*
 * AUTOR:	Fânio Panga							*
 * DATA:	21/05/22025							*
 * ******************************************************************************/

int	ft_isUpper(char ch)
{
	return (ch >= 65 && ch <= 90);
}

int	ft_isLower(char ch)
{
	return (ch >= 97 && ch <= 122);
}

int	ft_isPair(int nb)
{
	return (nb % 2 == 0);
}

char	*ft_UpDown(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (ft_isPair(i) && ft_isLower(s[i]))
			s[i] -= 32;
		else
			if (ft_isPair(i) == 0 && ft_isUpper(s[i]))
				s[i] += 32;
		i++;
	}
	return (s);
}
