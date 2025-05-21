/********************************************************************************
 * PROG0730.C:	Compacta num unico caractere qualquer conjucto de ch repetido	*
 * AUTOR:	Fânio Panga							*
 * DATA:	21/05/2025							*
 * ******************************************************************************/

char	*ft_strpack(char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (i == 0)
			s[j++] = s[i];
		else
			if (s[i] != s[i - 1])
				s[j++] = s[i];
		i++;
	}
	s[j] = '\0';
	return (s);
}
