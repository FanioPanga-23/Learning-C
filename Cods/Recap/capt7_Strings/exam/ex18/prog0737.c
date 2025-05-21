/********************************************************************************
 * PROG0737.C:	Coloca o caractere 'ch' nas posicoes i..j na string 's'		*
 * AUTOR:	Fânio Panga							*
 * DATA:	21/05/2025							*
 * ******************************************************************************/

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strijset(char *s, int i, int j, char ch)
{
	if (j > ft_strlen(s))
		j = ft_strlen(s) - 1;
	while (i <= j)
		s[i++] = ch;
	return (s);
}
