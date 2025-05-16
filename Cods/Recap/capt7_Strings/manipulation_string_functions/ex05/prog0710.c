/********************************************************************************
 * PROG0710.C:	Contar o numero de ocorrencia de 'ch' numa string		*
 * AUTOR:	Fânio Panga							*
 * DATA:	16/05/2025							*
 * ******************************************************************************/

int	ft_strcountc(char *s, char ch)
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
