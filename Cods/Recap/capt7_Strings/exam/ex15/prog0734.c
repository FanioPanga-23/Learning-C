/********************************************************************************
 * PROG0734.C:	Coloca em cada posicao da string 's' o proximo caractere ASCII	*
 * AUTOR:	Fânio Panga							*
 * DATA:	21/05/2025							*
 * ******************************************************************************/

char	*ft_Prox_Char(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		s[i] = ++s[i];
		i++;
	}
	return (s);
}
