/********************************************************************************
 * PROG0736.C:	Substitui todos os caracteres da string por espacos em branco	*
 * AUTOR:	Fânio Panga							*
 * DATA:	21/05/2025							*
 * ******************************************************************************/

char	*ft_allspaces(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		s[i++] = ' ';
	return (s);
}
