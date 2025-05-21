/********************************************************************************
 * PROG0729.C:	Devolve o n-esimo caractere da string 's'			*
 * AUTOR:	Fânio Panga							*
 * DATA:	21/5/2025							*
 * ******************************************************************************/

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	ft_n_esimo(char *s, int n)
{
	if (n <= ft_strlen(s))
		return (s[n - 1]);
	else
		return ('\0');
}
