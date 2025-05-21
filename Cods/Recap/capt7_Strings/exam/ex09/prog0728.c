/********************************************************************************
 * PROG0728.C:	Retira todos os caracteres nao repetidos na string		*
 * AUTOR:	Fânio Panga							*
 * DATA:	21/05/2025							*
 * ******************************************************************************/

int	ft_strcountch(char *s, char ch)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			count++;
		i++;
	}
	return (count);
}

char	*ft_repeticoes(char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (ft_strcountch(s, s[i]) > 1)
			s[j++] = s[i];
		i++;
	}
	s[j] = '\0';
	return (s);
}
