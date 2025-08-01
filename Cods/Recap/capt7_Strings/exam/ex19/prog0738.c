/********************************************************************************
 * PROG0738.C:	Recebe e duplica o conteudo de uma string			*
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

char	*ft_strduplica(char *s)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		s[len+i] = s[i];
		i++;
	}
	s[2*len] = '\0';
	return (s);
}
