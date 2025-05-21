/********************************************************************************
 * PROG0726.C:	Coloca o caractere 'ch' nas primeiras n posicoes de 's'		*
 * AUTOR:	Fânio Panga							*
 * DATA:	20/05/2025							*
 * ******************************************************************************/

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strnset(char *s, char ch, int n)
{
	int	i;

	i = 0;
	if (n > ft_strlen(s))
		n = ft_strlen(s);
	while (i < n)
		s[i++] = ch;
	return (s);
}
