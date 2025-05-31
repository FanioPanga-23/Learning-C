/********************************************************************************
 * PROG0740.C:	Capitaliza as letras iniciais de todas as palavras		*
 * AUTOR:	Fânio Panga							*
 * DATA:	22/05/2025							*
 * ******************************************************************************/

int	ft_isSpace(char ch)
{
	return (ch == ' ');
}

int	ft_isLower(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

int	ft_isUpper(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

char	*ft_wordupr(char *s)
{
	int	i;

	i = 1;
	if (ft_isLower(s[0]))
		s[0] -= 32;
	while (s[i] != '\0')
	{
		if (ft_isSpace(s[i - 1]) && ft_isLower(s[i]))
			s[i] -= 32;
		if (ft_isSpace(s[i - 1]) == 0 && ft_isUpper(s[i]))
			s[i] += 32;
		i++;
	}
	return (s);
}
