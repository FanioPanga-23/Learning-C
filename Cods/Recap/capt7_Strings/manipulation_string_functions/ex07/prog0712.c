/********************************************************************************
 * PROG0712.C:	Devolve o indice da primeira ocorrencia de 'ch' na string 's'	*
 * AUTOR:	Fânio Panga							*
 * DATA:	16/05/2025							*
 * ******************************************************************************/

int	ft_indchr(char *s, char ch)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			return (i);
		i++;
	}
	return (-1);
}
